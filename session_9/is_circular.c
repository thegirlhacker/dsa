#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Check if a linked list is circular
int isCircular(struct Node *head) {
    // An empty list is considered circular
    if (head == NULL) {
        return 1;
    }

    struct Node *temp = head->next;

    // Traverse the list until we find NULL or reach the head node again
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    // If we reached the head node, then it is circular
    return (temp == head);
}

// Helper to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main() {
    // 1. Create a circular linked list: 10 -> 20 -> 30 -> 10
    struct Node *headC = newNode(10);
    headC->next = newNode(20);
    headC->next->next = newNode(30);
    headC->next->next->next = headC; // Make it circular

    // 2. Create a standard singly linked list: 10 -> 20 -> 30 -> NULL
    struct Node *headS = newNode(10);
    headS->next = newNode(20);
    headS->next->next = newNode(30);

    if (isCircular(headC)) {
        printf("List 1 is circular.\n");
    } else {
        printf("List 1 is not circular.\n");
    }

    if (isCircular(headS)) {
        printf("List 2 is circular.\n");
    } else {
        printf("List 2 is not circular.\n");
    }

    return 0;
}
