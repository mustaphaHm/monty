#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number, char *n);
} instruction_t;

void push(stack_t **stack, unsigned int line_number, char *n);
void pall(stack_t **stack, unsigned int line_number, char *n);
void usageError(void);
void fileError(char *name);
void opcodeError(unsigned int line_number, char *opcode);
void mallocError(void);
void pushError(unsigned int line_number);
void free_stack(stack_t **stack);
void (*get_op_func(char *s))(stack_t **stack, unsigned int l, char *n);
int isInteger(const char *str);
void pint(stack_t **stack, unsigned int line_number, char *n);
void empty_stack(unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number, char *n);
void pop_error(unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number, char *n);
void swap_error(unsigned int line_number);
void add(stack_t **stack, unsigned int line_number, char *n);
void add_error(unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number, char *n);
void sub(stack_t **stack, unsigned int line_number, char *n);
void sub_error(unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number, char *n);
void div_error_short(unsigned int line_number);
void div_error_zero(unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number, char *n);
void mul_error(unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number, char *n);
void mod_error(unsigned int line_number);
#endif
