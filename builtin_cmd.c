#include "main.h"

/**
 * built_in - Implements the exit and env commands
 * @cmd_args: an array of command line arguments
 * @input: input read using getline
 *
 * Return: Nothing
 */

void built_in(char **cmd_args, char *input)
{
	int stat;

	if (_strcmp(cmd_args[0], "exit") == 0)
	{
		free(cmd_args);
		free(input);
		exit(2);
	}
	/*if ((_strcmp(cmd_args[0], "exit") == 0) && (cmd_args[1] != NULL))*/
	/**
	*{
		*stat = atoi(cmd_args[1]);
		*free(cmd_args);
		*free(input);
		*exit(stat);
	*}
	*/
	if (_strcmp(cmd_args[0], "env") == 0)
	{
		_environ();
	}
}
