#include "main.h"

/**
 * path_separator - separate the path values
 * @arg: accept command
 * 
 *
 * Return: string
 */

char *path_separator(char *path, char *arg)
{
	char *copy_path, *path_token, *file_path;
	char *delim = ":";

	/*path = return_path();*/

	copy_path = strdup(path);
	path_token = strtok(copy_path, delim);
	file_path = malloc(strlen(arg) + strlen(path_token) + 2);

	while(path_token != NULL)
	{
		strcpy(file_path, path_token);
		strcat(file_path, "/");
		strcat(file_path, arg);
		strcat(file_path, "\0");

		if (access(file_path, X_OK) == 0)
		{
			/*free(copy_path);*/
			return (file_path);
		}
		/*else
		{
			printf("Command not found");
			buffer = (incrementor + '0');
			input_err(argv[0], buffer, cmd_args[0]);
		}*/
		path_token = strtok(NULL, delim);
	}
	/*free(copy_path);*/
	/*free(file_path);*/
	return (NULL);
}

char *return_path(void)
{
	char *path = NULL;

	path = getenv("PATH");

	if (path)
	{
		/*path = path_location(path);*/
		return (path);
	}
	return (NULL);
}

