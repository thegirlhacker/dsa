//Reverse a linked list 
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void reverse(struct Node **head)
{
    struct Node *prev=NULL;
    struct Node *curr=*head;
    struct Node *next=NULL;

    while(curr!=NULL)
    {
        next=curr->next;

        curr->next=prev;

        prev=curr;

        curr=next;
    }

    *head=prev;
}

void display(struct Node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}

int main()
{
    struct Node *head,*second,*third,*fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    printf("Original List:\n");
    display(head);

    reverse(&head);

    printf("\nReversed List:\n");
    display(head);

    return 0;
}