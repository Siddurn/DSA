#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
	Slist *new_node=malloc(sizeof(Slist));
    if(new_node == NULL)
    {
        return FAILURE;
    }
    new_node->data=data;
    new_node->link=*head;
    *head=new_node;
    return SUCCESS;
}

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    // first node has g data

    if ((*head)->data == g_data)
    {
        Slist *new_node = malloc(sizeof(Slist));
        if (new_node == NULL)
        {
            return FAILURE;
        }
        new_node->data = ndata;
        new_node->link = *head;
        *head = new_node;
        return SUCCESS;
    }

    Slist *temp = *head;
    Slist *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == g_data)
        {
            Slist *new_node = malloc(sizeof(Slist));
            if (new_node == NULL)
            {
                return FAILURE;
            }
            new_node->data = ndata;
            new_node->link = temp;
            prev->link = new_node;
            return SUCCESS;
        }
        prev = temp;
        temp = temp->link;
    }
    return DATA_NOT_FOUND;
}

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
    if (*head == NULL)
    {
        return LIST_EMPTY;
    }

    Slist *temp = *head;

    // Traverse the list to find the node with g_data
    while (temp != NULL)
    {
        if (temp->data == g_data)
        {
            // Create a new node
            Slist *new_node = malloc(sizeof(Slist));
            if (new_node == NULL)
            {
                return FAILURE; // Memory allocation failed
            }

            // Insert the new node after the found node
            new_node->data = ndata;
            new_node->link = temp->link;
            temp->link = new_node;

            return SUCCESS;
        }
        temp = temp->link;
    }

    // g_data not found in the list
    return DATA_NOT_FOUND;
}