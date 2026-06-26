#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Return sum of all nodes
int sum(struct Node *head)
{
    int total=0;

    while(head!=NULL)
    {
        total+=head->data;
        head=head->next;
    }

    return total;
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

    printf("Sum = %d",sum(head));

    return 0;
}