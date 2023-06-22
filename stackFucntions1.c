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
	int num;
	(void) line_number;

	newNode = (stack_t *)malloc(sizeof(stack_t));
	if (newNode == NULL)
		mallocError();
	if (n == NULL || !isInteger(n))
		pushError(line_number);
	num = atoi(n);
	newNode->n = num;
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
/**
 * isInteger - function that check if a string is int
 * @str: the string
 * Return: int
 */
int isInteger(const char *str)
{
	int i = 0;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
