#include "monty.h"
/**
 * _fn_pop - remove the top element of the stack
 * @stack: head
 * @line_number: line number
 *
 * Return: nothing
 */
void _fn_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		structGl.status = 1;
		return;
	}

	tmp = tmp->next;
	free(*stack);
	*stack = tmp;

	structGl.status = 0;
}