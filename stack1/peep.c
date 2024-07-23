#include "stack.h"

/* Function for print the data's in the stack */
void Peep(Stack_t *s)
{
	/* Checking the Stack is empty or not */
	if (s->top == -1)
	{
		printf("INFO : Stack is empty\n");
	}
    else
    {
	    /* Declaring the temp for store the top value to print the values in the Stack*/
		int temp_top=s->top;
	    printf("Top -> ");
	    while (temp_top > -1)
	    {
		    printf("%d ", s -> stack[temp_top--]);
	    }
	    printf("\n");
    }
}