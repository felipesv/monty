#include "monty.h"
/**
 * _fn_add - adds the top two elements of the stack
 * @stack: head
 * @line_number: line number
 *
 * Return: nothing
 */
void _fn_add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		structGl.status = 1;
		return;
	}

	if ((*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		structGl.status = 1;
		return;
	}

	tmp = (*stack)->next;
	(*stack)->next->n += (*stack)->n;

	free(*stack);

	tmp->prev = NULL;
	(*stack) = tmp;

	structGl.status = 0;
}
