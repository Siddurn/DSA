#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, int n)
{
    // Check if the position is the first and the list is empty
    if (*head == NULL && n == 1)
    {
        return insert_at_first(head, data);
    }

    // If the list is empty but n is not 1
    if (*head == NULL)
    {
        return LIST_EMPTY; 
    }

    // If we need to insert at the first position and the list is not empty
    if (n == 1)
    {
       return insert_at_first(head, data); 
    }

    int count = 1;
    Slist *temp = *head;

    // Traverse the list to find the n-th position
    while (temp != NULL)
    {
        if (count == n-1 )
        {
            return sl_insert_after(&temp,temp->data, data);
        }
        temp = temp->link;
        count++;
    }

    // If we reach here, the position was not found
    return POSITION_NOT_FOUND;
}
