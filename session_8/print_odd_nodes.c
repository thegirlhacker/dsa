#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Print only odd-valued nodes
void printOddNodes(struct Node *head)
{
    while(head!=NULL)
    {
        if(head->data % 2 != 0)
            printf("%d ",head->data);

        head=head->next;
    }
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
    second->data=15;
    third->data=20;
    fourth->data=25;
    fifth->data=30;

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;

    printOddNodes(head);

    return 0;
}