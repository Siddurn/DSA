#include "base.h"

int insert_after(Slist **head, data_t g_data,data_t a_data)
{
	if(*head == NULL)
    {
        return FAILURE;
    }
    Slist *temp=*head;
    while(temp->link=NULL)
    {
        if(temp->data != g_data)
        {
            temp=temp->link;
        }

        else
        {
            Slist *new_node=malloc(sizeof(Slist));
            if(new_node==NULL)
            {
                return FAILURE;
            }
            new_node->data = a_data;
            new_node->link = temp -> link;
            temp->link = new_node;
            return SUCCESS;
        }
    }
    printf("Data not found\n");
    return FAILURE;
}