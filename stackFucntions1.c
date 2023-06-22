#include "monty.h"
/**
 * push - function that push a node into a stack
 * @stack: pointer to the head of the stack
 * @line_number: line number
 * @n: the data to insert into stack
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *newNode;
	(void) line_number;

	newNode = (stack_t *)malloc(sizeof(stack_t));
	if (newNode == NULL)
		mallocError();
	if (n == NULL || !isdigit(*n))
		pushError(line_number);
	newNode->n = atoi(n);
	newNode->prev = NULL;

	if (*stack != NULL)
	{
		newNode->next = *stack;
		(*stack)->prev = newNode;
	}
	else
		newNode->next = NULL;
	*stack = newNode;
}
/**
 * pall - function that prints all values on the stack
 *@stack: pointer to the head of teh stack
 *@line_number: line number
 *@n: the data part of the node
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *temp;
	(void) line_number;
	(void) n;
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
/**
 * free_stack - free the stack
 * @stack: the stack
 * Return: nothing
 */
void free_stack(stack_t **stack)
{
	stack_t *st;

	st = *stack;
	while (st != NULL)
	{
		stack_t *temp = st;

		st = st->next;
		free(temp);
	}
}
