#include "monty.h"
#define MAX_LINE_LENGTH 256
/**
 * main - the entry point to my program
 * @argc: the number of arguments
 * @argv: list of parameters passed to the main
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fptr;
	char line[MAX_LINE_LENGTH];
	unsigned int line_number = 1;
	stack_t *stack = NULL;
	char *opcode;
	char *argument;

	if (argc != 2)
		usageError();
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
		fileError(argv[1]);
	while (fgets(line, sizeof(line), fptr) != NULL)
	{
		line[strcspn(line, "\n")] = '\0';
		opcode = strtok(line, " ");
		argument = strtok(NULL, " ");
		if (opcode != NULL)
			get_op_func(opcode)(&stack, line_number, argument);
		else
			opcodeError(line_number, opcode);
		line_number++;
	}
	free_stack(&stack);
	fclose(fptr);
	return (0);
}
