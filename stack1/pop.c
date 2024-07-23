#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *stk)
{	
    if(stk->top == -1)
    {
        return FAILURE;
    }
    stk->top--;
}