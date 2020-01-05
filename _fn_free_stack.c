#include "monty.h"
/**
 * _fn_free_stack - free the stack
 * @head: top of the stack
 *
 * Return: nothing
 */
void _fn_free_stack(stack_t *head)
{
	if (head != NULL)
	{
		_fn_free_stack(head->next);
		free(head);
	}
}