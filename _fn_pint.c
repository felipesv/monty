#include "monty.h"
/**
 * _fn_pint - function that prints the last element of a list
 * @stack: head
 * @line_number: line number
 *
 * Return: nothing
 */
void _fn_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", line_number);
		structGl.status = 1;
		return;
	}
	printf("%d\n", (*stack)->n);
	structGl.status = 0;
}
