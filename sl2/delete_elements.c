#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    if(*head == NULL)
    {
        return FAILURE;
    }
    //if first element is given data
    if((*head)->data == data)
    {
        free(*head);
        *head=NULL;
        return SUCCESS;
    }
    
    Slist *temp=*head;
    Slist *prev=NULL;
    while(temp != NULL && temp->data != data)
    {
        prev=temp;
        temp=temp->link;
    }
    if(temp == NULL)
    {
        return DATA_NOT_FOUND;
    }
    //data is found on a certain node
    prev->link=temp->link;
    free(temp);
    return SUCCESS;
}