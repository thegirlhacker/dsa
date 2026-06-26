#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Delete node at a given position
void deleteMiddle(struct Node **head,int pos)
{
    if(*head==NULL)
        return;

    // Delete first node
    if(pos==1)
    {
        struct Node *temp=*head;

        *head=(*head)->next;

        free(temp);

        return;
    }

    struct Node *temp=*head;

    // Reach previous node
    for(int i=1;i<pos-1;i++)
        temp=temp->next;

    struct Node *del=temp->next;

    // Skip node to be deleted
    temp->next=del->next;

    free(del);
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

    deleteMiddle(&head,3);

    display(head);

    return 0;
}