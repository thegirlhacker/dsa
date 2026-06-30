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

// Replace all occurrences of oldValue with newValue
int replaceValue(struct Node *head, int oldValue, int newValue) {
    if (head == NULL) {
        return 0;
    }

    struct Node *temp = head;
    int replacedCount = 0;
    do {
        if (temp->data == oldValue) {
            temp->data = newValue;
            replacedCount++;
        }
        temp = temp->next;
    } while (temp != head);

    return replacedCount;
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
    insertEnd(&head, 20);
    insertEnd(&head, 40);

    printf("Original Circular Linked List:\n");
    display(head);

    int oldVal = 20;
    int newVal = 99;
    printf("\nReplacing all occurrences of %d with %d...\n", oldVal, newVal);
    int count = replaceValue(head, oldVal, newVal);
    printf("Replaced %d node(s).\n", count);

    printf("Updated Circular Linked List:\n");
    display(head);

    return 0;
}
