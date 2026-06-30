#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Insert at end (helper for setup)
void insertEnd(struct Node **head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}

// Split a circular linked list into two halves
void splitCircular(struct Node *head, struct Node **head1, struct Node **head2) {
    if (head == NULL) {
        *head1 = NULL;
        *head2 = NULL;
        return;
    }

    struct Node *slow = head;
    struct Node *fast = head;

    // Move fast pointer by 2 steps and slow pointer by 1 step
    while (fast->next != head && fast->next->next != head) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // If there are even elements, fast->next->next is head.
    // Move fast pointer one step to reach the end of the list.
    if (fast->next->next == head) {
        fast = fast->next;
    }

    // Head of first half is the original head
    *head1 = head;

    // Head of second half is slow->next
    if (head->next != head) {
        *head2 = slow->next;
    } else {
        *head2 = NULL; // Only one node in the list
    }

    // Make the second half circular
    if (*head2 != NULL) {
        fast->next = slow->next;
    }

    // Make the first half circular
    slow->next = head;
}

// Display circular linked list
void display(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct Node *head = NULL;
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    printf("Original Circular Linked List:\n");
    display(head);

    printf("\nSplitting list into two halves...\n");
    splitCircular(head, &head1, &head2);

    printf("First Half:\n");
    display(head1);

    printf("Second Half:\n");
    display(head2);

    return 0;
}
