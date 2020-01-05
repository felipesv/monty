#include "monty.h"
/**
 * validArguments - valid arguments
 * @argcnt: number of arguments
 * @argvar: arguments
 *
 * Return: 0 success
 */
void validArguments(int argcnt, char **argvar)
{
	if (argcnt != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	structGl.filePointer = fopen(argvar[1], "r");
	if (structGl.filePointer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argvar[1]);
		exit(EXIT_FAILURE);
	}
}