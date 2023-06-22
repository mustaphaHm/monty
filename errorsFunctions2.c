#include "monty.h"
/**
 * empty_stack - function that print to stderr if empty stack 
 * @stack: pointer to pointer to the first ele of the stack
 * Return: nothing
 */
void empty_stack(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty", line_number);
	exit(EXIT_FAILURE);
}
