#include "monty.h"
strGlobal_t structGl = {NULL, NULL, NULL, NULL, 0};
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	char *cmd;
	size_t len = 0;
	ssize_t fRead = 0;
	unsigned int line_number = 0;
	void (*fn_opcode)(stack_t **stack, unsigned int line_number) = NULL;

	validArguments(argc, argv);

	while ((fRead = getline(&structGl.buffer, &len, structGl.filePointer)) != EOF)
	{
		line_number++;
		structGl.status = 0;
		cmd = strtok(structGl.buffer, "\t\n ");
		if (cmd && cmd[0] != '#')
		{
			fn_opcode = gtf(cmd, line_number);
			structGl.node_n = strtok(NULL, "\t\n ");
			fn_opcode(&(structGl.header), line_number);
			if (structGl.status == 1)
			{
				_fn_free();
				exit(EXIT_FAILURE);
			}
		}
	}
	_fn_free();
	exit(EXIT_SUCCESS);
}
