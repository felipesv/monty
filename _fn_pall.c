#include "monty.h"
/**
 * _fn_pall - prints all the doible linked list
 * @stack: head
 * @line_number: line number
 *
 * Return: nothing
 */
void _fn_pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		_fn_pall(&(*stack)->next, (*stack)->n);
	}
}
