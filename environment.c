#include "main.h"

/**
 * _environ - prints the current environment
 *
 * Return: nothing
 */

void _environ(void)
{
	/*extern char environ is defined in main.h*/
	int pos;
	char **env = environ;

	for (pos = 0; env[pos] != NULL; pos++)
	{
		print_a_str(env[pos]);
	}
}

/**
 * _getenv - custom function to fetch environment variables
 * @str: the string to be fetched from the environment
 *
 * Return: the specified environment var, else null
 */

char *_getenv(char *str)
{
	char **env = environ;
	size_t len;
	int pos, value;

	len = _strlen(str);
	for (pos = 0; env[pos] != NULL; pos++)
	{
		value = _strncmp(str, env[pos], len);
		if (value == 0 && env[pos][len] == '=')
		{
			return (&env[pos][len + 1]);
		}
	}
	return (NULL);
}
