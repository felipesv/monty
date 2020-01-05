#include "monty.h"
/**
 * _fn_free - free memory
 *
 * Return: nothing
 */
void _fn_free(void)
{
	if (structGl.buffer != NULL)
		free(structGl.buffer);

	if (structGl.header != NULL)
		_fn_free_stack(structGl.header);

	if (structGl.filePointer != NULL)
		fclose(structGl.filePointer);
}
