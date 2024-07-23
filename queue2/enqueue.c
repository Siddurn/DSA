#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
    Queue_t *new_node= malloc(sizeof(Queue_t));
    if( new_node ==NULL )
    {
        return FAILURE;
    }
    new_node-> data =data;
    if(*front == NULL)
    {
        *front=*rear =new_node;
    }
    else
    {
        (*rear)->link =new_node;
        *rear =new_node;
    }
    new_node->link = *front;
    return SUCCESS;
}