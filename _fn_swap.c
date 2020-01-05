#include "monty.h"
/**
 * _fn_swap - swaps the top two elements of the stack.
 * @stack: head
 * @line_number: line number
 *
 * Return: nothing
 */
void _fn_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int value = 0;

	if (!tmp || !tmp->next)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		structGl.status = 1;
		return;
	}

	tmp = tmp->next;
	value = tmp->n;
	tmp->n = (*stack)->n;
	(*stack)->n = value;

	structGl.status = 0;
}
