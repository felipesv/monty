#include "monty.h"
/**
 * _fn_push - function that insert node in the stack
 * @stack: head
 * @line_number: line number
 *
 * Return: nothing
 */
void _fn_push(stack_t **stack, unsigned int line_number)
{
	stack_t *newNode;
	(void) line_number;

	if (structGl.node_n == NULL || _fn_isdigit() == 1)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		structGl.status = 1;
		return;
	}

	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		structGl.status = 1;
		return;
	}

	newNode->n = atoi(structGl.node_n);
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*stack == NULL)
	{
		*stack = newNode;
		structGl.status = 0;
		return;
	}

	newNode->next = *stack;
	(*stack)->prev = newNode;
	*stack = newNode;
	structGl.status = 0;
}