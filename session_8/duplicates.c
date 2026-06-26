Q4 Remove Duplicates ⭐⭐⭐⭐

Sorted List

10→10→20→20→30

Need

10→20→30

Thought Process

Compare

current

next

If equal

Delete next.

Else

Move ahead.

void removeDuplicate(struct Node *head)
{
    while(head!=NULL && head->next!=NULL)
    {
        if(head->data==head->next->data)
        {
            struct Node *temp=head->next;

            head->next=temp->next;

            free(temp);
        }
        else
        {
            head=head->next;
        }
    }
}