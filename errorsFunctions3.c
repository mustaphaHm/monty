#include "monty.h"
/**
 * div_error_short - prints stack too short
 * @line_number: line number
 * Return: nothing
 */
void div_error_short(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
/**
 * div_error_zero - prints division by zero
 * @line_number: line number
 * Return: nothing
 */
void div_error_zero(unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}
/**
 * mul_error - prints error stack too short
 * @line_number: line number
 * Return: nothing
 */
void mul_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
