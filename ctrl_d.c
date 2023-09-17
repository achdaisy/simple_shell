#include "main.h"

/**
 * ctrl_d - implement the control D command
 *
 * Return: Nothing
 */

void ctrl_d(int read, char *input)
{
	if (read == -1)
	{
		free(input);
		exit(0);
	}
}
