#include "monty.h"
/**
 * main - the entry point to my program
 * @argc: the number of arguments
 * @argv: list of parameters passed to the main
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fptr;
	char *line = NULL;
	size_t line_size = 0;
	ssize_t read;
	unsigned int line_number;
	stack_t *stack = NULL;
	char *opcode;
	char *argument;

	if (argc != 2)
		usageError();
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
		fileError(argv[1]);
	while ((read = getline(&line, &line_size, fptr)) != -1)
	{
		line[strcspn(line, "\n")] = '\0';
		opcode = strtok(line, " ");
		argument = strtok(NULL, " ");
		if (opcode != NULL)
		{
			if (strcmp(opcode, "push") == 0)
			{
				if (argument == NULL)
					pushError(line_number);
				push(&stack, atoi(argument));
			}
			else if (strcmp(opcode, "pall") == 0)
			{
				pall(&stack);
			}
			else
				opcodeError(line_number, opcode);
		}
		line_number++;
	}
	fclose(fptr);
	if (line)
		free(line);
	return (0);
}
