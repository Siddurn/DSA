#include "sll.h"

int reverse_recursive(Slist *prev,Slist *cur,Slist *next,Slist **head)
{
    if(*head == NULL)
    {
        return LIST_EMPTY; 
    }
    if (cur == NULL)
    {
        *head = prev; // Update the head to the new first node
        return SUCCESS; // Assuming SUCCESS is defined elsewhere
    }

    next=cur->link;
    cur->link=prev;
    prev=cur; 
    cur=next;  
    reverse_recursive(prev,cur,next,head);   

}