#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Insert a node at the beginning
void insertBeginning(struct Node **head, int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;

    // New node points to current head
    newNode->next = *head;

    // Head now points to new node
    *head = newNode;
}

// Display Linked List
void display(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    struct Node *head = NULL;

    insertBeginning(&head,30);
    insertBeginning(&head,20);
    insertBeginning(&head,10);

    display(head);

    return 0;
}