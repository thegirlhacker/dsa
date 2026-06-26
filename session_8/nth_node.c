//print value of node at nth position from end of linked list
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void nthFromEnd(struct Node *head,int n)
{
    struct Node *first=head;
    struct Node *second=head;

    // Move first pointer n steps ahead
    for(int i=0;i<n;i++)
    {
        if(first==NULL)
        {
            printf("Invalid Position");
            return;
        }

        first=first->next;
    }

    // Move both pointers together
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }

    printf("Nth Node From End = %d",second->data);
}

void display(struct Node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }

    printf("\n");
}

int main()
{
    struct Node *head,*second,*third,*fourth,*fifth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    fifth->data=50;

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;

    display(head);

    nthFromEnd(head,2);

    return 0;
}