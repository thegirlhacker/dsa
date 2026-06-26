#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Delete first node
void deleteBeginning(struct Node **head)
{
    if(*head==NULL)
        return;

    struct Node *temp=*head;

    // Move head to second node
    *head=(*head)->next;

    // Delete first node
    free(temp);
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

    deleteBeginning(&head);

    display(head);

    return 0;
}#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Delete first node
void deleteBeginning(struct Node **head)
{
    if(*head==NULL)
        return;

    struct Node *temp=*head;

    // Move head to second node
    *head=(*head)->next;

    // Delete first node
    free(temp);
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

    deleteBeginning(&head);

    display(head);

    return 0;
}