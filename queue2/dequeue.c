#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    if(*front == NULL)
    {
        return FAILURE;
    }
    //if single node present
    if(*front == (*front)->link)
    {
        free(*front);
        *front = *rear = NULL;
    }
    else
    {
        *front = (*front)->link;
        free((*rear)->link);
        (*rear)->link=*front;
    }
}