#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data) 
{ 
    if(head == NULL)
    {
        return LIST_EMPTY;
    }
    if(pos == 0)
    {
        return FAILURE;
    }
    Slist *temp=head;
    Slist *temp2=head;
    while (temp != NULL )
    {
        
        if(pos>0)
        {
            pos--;
        }
        else if(pos == 0)
        {
            temp2=temp2->link;
        }
        temp=temp->link;
    }
    if(pos>0)
    {
        return FAILURE;
    }
    if(pos == 0)
    {
        *data=temp2->data;
    }
    return SUCCESS;
} 