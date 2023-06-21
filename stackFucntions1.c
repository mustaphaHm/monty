#include "monty.h"
/**
 * push - function that push a node into a stack
 * @stack: pointer to the head of the stack
 * @n: the data part of the node
 * Return: nothing
 */
void push(stack_t **stack, int n)
{
	stack_t *newNode;

	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
		mallocError();
	newNode->n = n;
	newNode->prev = NULL;
	if (*stack == NULL)
		newNode->next = NULL;
	else
	{
		newNode->next = *stack;
		(*stack)->prev = newNode;
	}
	*stack = newNode;
}
/**
 * pall - function that prints all values on the stack
 *@stack: pointer to the head of teh stack
 * Return: nothing
 */
void pall(stack_t **stack)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d \n", temp->n);
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
