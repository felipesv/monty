#include "monty.h"
/**
 * _fn_isdigit - isdigit
 *
 * Return: nothing
 */
int _fn_isdigit(void)
{
	int i = 0, negCnt = 0;

	if (structGl.node_n == NULL)
		return (1);

	while (structGl.node_n[i] != '\0')
	{
		if (structGl.node_n[i] == '-')
		{
			negCnt++;
		}
		else
		{
			if (structGl.node_n[i] >= 'a' && structGl.node_n[i] <= 'z')
				return (1);
			if (structGl.node_n[i] >= 'A' && structGl.node_n[i] <= 'Z')
				return (1);
		}
		i++;
	}

	if (negCnt > 1)
		return (1);

	return (0);
}