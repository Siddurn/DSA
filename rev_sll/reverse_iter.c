#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{ 
    if (*head == NULL)
    {
        return LIST_EMPTY; // Assuming FAILURE is defined elsewhere
    }

    Slist *prev = NULL;
    Slist *cur = *head;
    Slist *next = NULL;

    while (cur != NULL)
    {
        next = cur->link; // Store the next node
        cur->link = prev; // Reverse the current node's pointer
        prev = cur;       // Move prev and cur one step forward
        cur = next;
    }

    *head = prev; // Update the head to the new first node
    return SUCCESS; 
} 