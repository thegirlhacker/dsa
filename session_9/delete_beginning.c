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

// Delete the first node of a circular linked list
void deleteBeginning(struct Node **head) {
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
    struct Node *last = *head;
    // Find the last node
    while (last->next != *head) {
        last = last->next;
    }

    // Update the last node's next link to point to the second node
    last->next = (*head)->next;
    // Update head pointer
    *head = (*head)->next;
    // Free the old head node
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

    deleteBeginning(&head);
    printf("After deleting from beginning:\n");
    display(head);

    deleteBeginning(&head);
    printf("After deleting from beginning again:\n");
    display(head);

    return 0;
}
