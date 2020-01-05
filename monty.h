#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct strGlobal - global struct
 * @filePointer: open file value
 * @buffer: file line buffer
 * @node_n: node value
 * @header: stack
 * @status: status error
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct strGlobal
{
	FILE *filePointer;
	char *buffer;
	char *node_n;
	stack_t *header;
	int status;
} strGlobal_t;

extern strGlobal_t structGl;


void validArguments(int argcnt, char **argvar);

void(*gtf(char *o, unsigned int l))(stack_t **stack, unsigned int line_number);

int _fn_isdigit(void);
void _fn_free_stack(stack_t *head);
void _fn_free(void);

void _fn_push(stack_t **stack, unsigned int line_number);
void _fn_pall(stack_t **stack, unsigned int line_number);
void _fn_pint(stack_t **stack, unsigned int line_number);
void _fn_pop(stack_t **stack, unsigned int line_number);
void _fn_swap(stack_t **stack, unsigned int line_number);
void _fn_add(stack_t **stack, unsigned int line_number);
void _fn_nop(stack_t **stack, unsigned int line_number);
void _fn_sub(stack_t **stack, unsigned int line_number);
void _fn_div(stack_t **stack, unsigned int line_number);
void _fn_mul(stack_t **stack, unsigned int line_number);
void _fn_mod(stack_t **stack, unsigned int line_number);


#endif /* HOLBERTON_H */