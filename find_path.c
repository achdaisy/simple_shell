#include "main.h"

/**
 * npath - retrieves the PATH
 *
 * Return: nothing
 */

char *npath(void)
{
	char *path_copy =  NULL;
	int j;

	for (j = 0; environ[j] != NULL ; j++)
	{
		if (_strncmp(environ[j], "PATH", 4) == 0)
		{
			path_copy = _strdup(environ[j]);
		}
	}

	return (path_copy);
}
