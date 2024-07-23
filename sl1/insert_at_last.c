#include "base.h"

int insert_at_last(Slist **head, data_t data)
{
    // Allocate memory for the new node
    Slist *new_node = malloc(sizeof(Slist));
    if (new_node == NULL)
        return FAILURE; // Memory allocation failed
    
    // Initialize the new node
    new_node->data = data;
    new_node->link = NULL;
    
    if (*head == NULL) {
        // If the list is empty, make the new node the head
        *head = new_node;
    } else {
        // Traverse the list to find the last node
        Slist *temp = *head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        
        // Insert the new node at the end of the list
        temp->link = new_node;
    }
    
    return SUCCESS;
}