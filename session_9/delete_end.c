#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Insert a node at the end (helper for setup)
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

// Delete the last node of a circular linked list
void deleteEnd(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty, deletion not possible.\n");
        return;
    }

    struct Node *temp = *head;

    // Case 1: Only one node in the list
    if (temp->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }

    // Case 2: More than one node
    struct Node *prev = NULL;
    while (temp->next != *head) {
        prev = temp;
        temp = temp->next;
    }

    // Now temp points to the last node, prev points to the second-to-last node
    prev->next = *head;
    free(temp);
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

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Original Circular Linked List:\n");
    display(head);

    deleteEnd(&head);
    printf("After deleting from end:\n");
    display(head);

    deleteEnd(&head);
    printf("After deleting from end again:\n");
    display(head);

    return 0;
}
