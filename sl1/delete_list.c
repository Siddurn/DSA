#include "base.h"

int sl_delete_list(Slist **head)
{
    //if list empty return FAILURE
    if(*head == NULL)
    {
        return FAILURE;
    }
    //if only one node then free head and make it NULL
    if((*head)-> link ==  NULL)
    {
        free(*head);
        *head=NULL;
        return SUCCESS;
    }
    //NOW list is neither empty nor having only one node
    //use one temp pointer
    Slist *temp=NULL;
    //treverse through list
    while(*head != NULL)
    {
        //temp points to node pointed by head
        temp=*head;
        //head points to next node
        (*head)=(*head)->link;
        //free the node pointed by temp
        free(temp);
    }
    //if head reaches NULL it shows list is empty now
    return SUCCESS;
}
