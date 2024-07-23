#include "base.h"

int sl_delete_last(Slist **head)
{
    //check the list is empty 
    if(*head == NULL )
    {
        return FAILURE;
    }
    //check if only one node
    if((*head)->link == NULL )
    {
        free(*head);
        *head=NULL;
        return SUCCESS;
    }
    Slist *temp=*head;
    Slist *prev=NULL;
    while(temp->link != NULL )
    {
        prev=temp;
        temp=temp->link;
    }
    free(temp);
    prev->link=NULL;
    return SUCCESS;
}