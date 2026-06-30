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

// Delete the node after the k-th node
void deleteAfterK(struct Node **head, int k) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node *temp = *head;
    int count = 1;

    // Traverse to the k-th node
    while (count < k) {
        temp = temp->next;
        count++;
        // If we wrapped back to head, it means k is out of bounds (greater than list size)
        if (temp == *head && count < k) {
            printf("Position %d is out of bounds.\n", k);
            return;
        }
    }

    // The node to delete is the one after temp
    struct Node *toDelete = temp->next;

    // Case 1: Only one node in the list
    if (toDelete == temp) {
        free(toDelete);
        *head = NULL;
        return;
    }

    // Case 2: Node to delete is the head node
    if (toDelete == *head) {
        *head = (*head)->next;
    }

    // Unlink the node toDelete
    temp->next = toDelete->next;
    free(toDelete);
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

    printf("\nDeleting node after the 2nd node (node after 20, which is 30):\n");
    deleteAfterK(&head, 2);
    display(head);

    printf("\nDeleting node after the 3rd node (last node is 40, so node after 40 is head node 10):\n");
    deleteAfterK(&head, 3);
    display(head);

    printf("\nTrying to delete node after the 10th node (out of bounds):\n");
    deleteAfterK(&head, 10);

    return 0;
}
