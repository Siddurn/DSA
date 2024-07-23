#include "sll.h"

/* Function for inserting a number in a sorted linked list */
int insert_sorted(Slist **head, data_t data) 
{
    if (*head == NULL || data < (*head)->data)
    {
        return insert_at_first(head, data);
    }
    
    Slist *temp = *head;
    while (temp->link != NULL && temp->link->data < data)
    {
        temp = temp->link;
    }
    
    return sl_insert_after(head, temp->data, data);
}
