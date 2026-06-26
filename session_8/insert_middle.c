#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Insert at a given position
void insertMiddle(struct Node **head,int value,int pos)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->next=NULL;

    // Insert at beginning
    if(pos==1)
    {
        newNode->next=*head;
        *head=newNode;
        return;
    }

    struct Node *temp=*head;

    // Reach previous node
    for(int i=1;i<pos-1;i++)
        temp=temp->next;

    // New node points to next node
    newNode->next=temp->next;

    // Previous node points to new node
    temp->next=newNode;
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
    struct Node *head,*second,*third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    second->data=20;
    third->data=40;

    head->next=second;
    second->next=third;
    third->next=NULL;

    insertMiddle(&head,30,3);

    display(head);

    return 0;
}