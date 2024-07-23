#include "sll.h"

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