#include "monty.h"
/**
 * pint - function that prints the top element of the stack
 * @stack: pointer to pointer of the first elemnt of the stack
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *temp;
	(void) n;

	temp = *stack;
	if (temp != NULL)
		printf("%d\n", temp->n);
	else
	{
		empty_stack(line_number);
	}
	temp = temp->next;
}
