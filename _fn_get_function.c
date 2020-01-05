#include "monty.h"
/**
 * gtf - get the opcode function
 * @o: opcode
 * @l: line number
 *
 * Return: 0 success
 */
void (*gtf(char *o, unsigned int l))(stack_t **stack, unsigned int line_number)
{
	int cnt = 0;
	instruction_t opcode_fn[] = {
		{"push", _fn_push},
		{"pall", _fn_pall},
		{"pint", _fn_pint},
		{"pop", _fn_pop},
		{"swap", _fn_swap},
		{"add", _fn_add},
		{"nop", _fn_nop},
		{"sub", _fn_sub},
		{"div", _fn_div},
		{"mul", _fn_mul},
		{"mod", _fn_mod},
		{NULL, NULL}
	};

	for (cnt = 0; opcode_fn[cnt].opcode != NULL; cnt++)
	{
		if (strcmp(o, opcode_fn[cnt].opcode) == 0)
			return (opcode_fn[cnt].f);
	}

	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", l, o);
	exit(EXIT_FAILURE);
}