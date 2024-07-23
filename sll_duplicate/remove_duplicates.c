#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
    if(*head == NULL)
    {
        return FAILURE;
    }
    if((*head)->link == NULL)
    {
        return SUCCESS;
    }
    Slist *temp1,*temp2,*prev_temp2;
    temp1=*head;
    temp2=(*head)->link;
    prev_temp2=temp1;
    while(temp1->link != NULL)
    {
        while(temp2 != NULL)
        {
            int flag=1;
            if(temp2->data == temp1->data)
            {
                //temp2 is at last node
                if(temp2->link==NULL)
                {
                    prev_temp2->link=NULL;
                    free(temp2);
                    temp2=NULL;
                    prev_temp2=temp1->link;
                    flag=0;
                }
                //temp2 in middle of nodes
                else
                {
                    prev_temp2->link=temp2->link;
                    free(temp2);
                    temp2=prev_temp2;
                }
 
            }
            if(flag)
            {
                prev_temp2=temp2;
                temp2=temp2->link;
            }
        }
        temp1=temp1->link;
        temp2=temp1->link;
        prev_temp2=temp1;
    }
    return SUCCESS;

}