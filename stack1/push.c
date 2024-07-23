#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *stk, int element)
{
    if(stk->top == stk->capacity -1)
    {
        return FAILURE;
    }
    stk->top++;
    stk->stack[stk->top]=element;
    return SUCCESS;
}