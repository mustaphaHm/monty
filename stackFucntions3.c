#include "monty.h"
/**
 * sub - function that substract first from second ele of stack
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
/**
 * _div - function that dvide sec element by the top ele
 * @stack: pointer to pointer of the first elemnt of the stack
 * @line_number: the line number
 * @n: data of teh node
 */
void _div(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *top, *next;
	int div;
	(void) n;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		top = *stack;
		next = (*stack)->next;
		if (top->n == 0)
			div_error_zero(line_number);
		else
			div = next->n / top->n;
		next->n = div;

		*stack = next;
		next->prev = NULL;
		free(top);
	}
	else
		div_error_short(line_number);
}
/**
 * mul - function that mult the scond top ele with the top of stack
 * @stack: pointer to pointer of the first elemnt of the stack
 * @line_number: the line number
 * @n: data of teh node
 */
void mul(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *top, *next;
	int mul;
	(void) n;
	
	if (*stack != NULL && (*stack)->next != NULL)
	{
		top = *stack;
		next = (*stack)->next;
		mul = top->n * next->n;
		
		next->n = mul;
		*stack = next;
		next->prev = NULL;
		free(top);
	}
	else
		mul_error(line_number);
}
