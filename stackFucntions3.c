#include "monty.h"
/**
 * sub - function that first from second ele of stack
 *@stack: pointer to pointer of the first elemnt of the stack
 *@line_number: the line number
 *@n: data of teh node
 */
void sub(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *top, *next;
	int sub;
	(void) n;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		top = *stack;
		next = (*stack)->next;
		sub = next->n - top->n;
		next->n = sub;

		*stack = next;
		next->prev = NULL;
		free(top);
	}
	else
		sub_error(line_number);
}
