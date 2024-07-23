#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    Stack_t *new_node=malloc(sizeof(Stack_t));
    if(new_node == NULL)
    {
        return FAILURE;
    }
    new_node->data=data;
    new_node->link=*top;
    *top=new_node;
    return SUCCESS;
}