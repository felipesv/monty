#include "monty.h"
/**
 * _fn_pchar - doesn’t do anything.
 * @stack: head
 * @line_number: line_number
 *
 * Return: nothing
 */
void _fn_pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n", line_number);
		structGl.status = 1;
		return;
	}
	if ((*stack)->n < 65 || (*stack)->n > 126)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		structGl.status = 1;
		return;
	}
	printf("%c\n", (*stack)->n);
}
