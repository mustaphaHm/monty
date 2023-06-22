#include "monty.h"
/**
 * empty_stack - function that print to stderr if empty stack
 * @line_number: the line number
 * Return: nothing
 */
void empty_stack(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
/**
 * pop_error - function that pop the top element
 * @line_number: the line number
 * Return: nothing
 */
void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
