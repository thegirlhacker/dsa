#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Insert a node at the beginning of a circular linked list
void insertBeginning(struct Node **head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    // Traverse to the last node
    while (temp->next != *head) {
        temp = temp->next;
    }

    newNode->next = *head;
    temp->next = newNode;
    *head = newNode;
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

    insertBeginning(&head, 30);
    insertBeginning(&head, 20);
    insertBeginning(&head, 10);

    printf("Circular Linked List after inserting 30, 20, 10 at the beginning:\n");
    display(head);

    return 0;
}
