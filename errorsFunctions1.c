#include "monty.h"
/**
 * usageError - if file not given by user or num of args is incorrect
 *
 * Return: nothing
 */
void usageError(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * pushError - if there is no arguments or type arg not an int
 *@line_number: the line number
 * Return: nothing
 */
void pushError(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
/**
 * fileError - if cannot open file
 *@name: name of the file
 * Return: nothing
 */
void fileError(char *name)
{
	fprintf(stderr, "Error: Can't open file %s\n", name);
	exit(EXIT_FAILURE);
}
/**
 * opcodeError - if the opcode is invalide
 * @line_number: the line number
 * @opcode: the opcode
 * Return: nothing
 */
void opcodeError(unsigned int line_number, char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
/**
 * mallocError - print error if cant malloc
 *
 * Return: nothing
 */
void mallocError(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
