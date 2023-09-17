#include "main.h"

/**
 * _environ - prints the current environment
 *
 * Return: nothing
 */

void _environ(void)
{
	/*extern char environ is defined in main.h*/
	int pos = 0;
	char **env = environ;

	for (pos = 0; env[pos] != NULL; pos++)
	{
		print_a_str(env[pos]);
	}
}
