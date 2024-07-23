#include "queue.h"

Status IsQueueFull(Queue_t *q)
{
    if (q->count == q->capacity)
        return e_true;
    else
        return e_false;
}
Status IsQueueEmpty(Queue_t *q)
{
    if (q->count == 0)
        return e_true;
    else
        return e_false;
}