#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
    if( head == NULL )
    {
        return FAILURE;
    }
    int flag=0;
    Slist *temp=*head;
    Slist *temp2=NULL;
    while (temp->link != NULL)
    {
        if(data != temp->data)
        {
            temp=temp->link;
        }
        else if(data == temp->data)
        {
            temp2=temp;
            flag=1;
            while(temp->link != NULL)
            {
                temp=temp->link;
            }
            
        }
    }
    if(flag == 1)
    {
        temp->link = temp2;
        return SUCCESS;
    }
    else
    {
        return DATA_NOT_FOUND;
    }

}