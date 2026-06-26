#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Delete last node
void deleteEnd(struct Node **head)
{
    if(*head==NULL)
        return;

    // Only one node
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
        return;
    }

    struct Node *temp=*head;

    // Reach second last node
    while(temp->next->next!=NULL)
        temp=temp->next;

    // Delete last node
    free(temp->next);

    temp->next=NULL;
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
    third->data=30;

    head->next=second;
    second->next=third;
    third->next=NULL;

    deleteEnd(&head);

    display(head);

    return 0;
}