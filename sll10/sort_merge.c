#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
    if(*head1 == NULL && *head2 == NULL)
    {
        return FAILURE;
    }
    if(*head1==NULL)
    {
        *head1=*head2;
        sort(head1); 
        return SUCCESS;
    }
    if(*head2 == NULL)
    {
        sort(head1);
        return SUCCESS;
    }
    
    //traverse till end node of list1
    Slist *temp=*head1;
    while(temp->link != NULL)
    {
        temp=temp->link;
    }
    temp->link =*head2;
    printf("After merge\n");
    print_list(*head1);
    sort(head1);
    return SUCCESS;

}