#include "main.h"

/**
 * path_separator - separate the path values
 * @path: the path value reveived from return_path
 * @arg: accept command
 *
 * Return: string
 */

char *path_separator(char *path, char *arg)
{
	char *copy_path, *path_token, *file_path;
	char *delim = ":";

	/*path = return_path();*/

	copy_path = _strdup(path);
	path_token = strtok(copy_path, delim);
	file_path = malloc(_strlen(arg) + _strlen(path_token) + 2);

	while (path_token != NULL)
	{
		_strcpy(file_path, path_token);
		_strcat(file_path, "/");
		_strcat(file_path, arg);
		_strcat(file_path, "\0");

		if (access(file_path, X_OK) == 0)
		{
			free(copy_path);
			return (file_path);
		}
		path_token = strtok(NULL, delim);
	}
	free(copy_path);
	free(file_path);
	return (NULL);
}

/**
 * return_path - function to output the path value
 *
 * Return: path
 */

char *return_path(void)
{
	char *path = NULL;

	path = _getenv("PATH");

	if (path)
	{
		/*path = path_location(path);*/
		return (path);
	}
	return (NULL);
}
