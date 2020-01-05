#include "monty.h"
/**
 * _fn_sub - subtracts the top element
 * @stack: head
 * @line_number: line_number
 *
 * Return: nothing
 */
void _fn_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", line_number);
		structGl.status = 1;
		return;
	}

	if ((*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", line_number);
		structGl.status = 1;
		return;
	}

	tmp = (*stack)->next;
	(*stack)->next->n -= (*stack)->n;

	free(*stack);

	tmp->prev = NULL;
	(*stack) = tmp;

	structGl.status = 0;
}
