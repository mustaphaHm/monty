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
 * pop_error - function that prints error when poping element
 * @line_number: the line number
 * Return: nothing
 */
void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
/**
 * swap_error - function that prints err when stack is short
 * @line_number: the line number
 * Return: nothing
 */
void swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
/**
 * add_error - print err if stack < 2 elemnts
 * @line_number: the line number
 * Return: nothing
 */
void add_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
