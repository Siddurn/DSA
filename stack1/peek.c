#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *stk)
{
	if(stk->top == -1)
    {
        return FAILURE;
    }
    return stk->stack[stk->top];
}
