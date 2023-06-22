#include "monty.h"
/**
 * pint - function that prints the top element of the stack
 * @stack: pointer to pointer of the first elemnt of the stack
 * @line_number: the line number
 * @n: data of teh node
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *temp;
	(void) n;

	temp = *stack;
	if (temp != 0)
		printf("%d\n", temp->n);
	else
		empty_stack(line_number);
}
/**
 * pop _ function to remove top element from stack
 * @stack: pointer to pointer of the first elemnt of the stack
 * @line_number: the line number
 * @n: data of teh node
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *temp;
	(void) n;

	temp = *stack;
	if (temp != 0)
	{
		*stack = (*stack)->next;
	}
	else
		pop_error(line_number);
}
