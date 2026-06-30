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

// Insert a node after the k-th node
void insertAfterK(struct Node *head, int k, int value) {
    if (head == NULL) {
        printf("List is empty. Cannot insert after the %d-th node.\n", k);
        return;
    }

    struct Node *temp = head;
    int count = 1;

    // Traverse to the k-th node
    while (count < k) {
        temp = temp->next;
        count++;
        // If we wrapped back to head, it means k is out of bounds (greater than list size)
        if (temp == head && count < k) {
            printf("Position %d is out of bounds (list size is smaller than %d).\n", k, k);
            return;
        }
    }

    // Allocate memory for new node
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    
    // Insert new node after temp (which is the k-th node)
    newNode->next = temp->next;
    temp->next = newNode;
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

    printf("\nInserting 25 after 2nd node:\n");
    insertAfterK(head, 2, 25);
    display(head);

    printf("\nInserting 45 after 5th node:\n");
    insertAfterK(head, 5, 45);
    display(head);

    printf("\nTrying to insert 50 after 10th node (out of bounds):\n");
    insertAfterK(head, 10, 50);

    return 0;
}
