#include "main.h"

/**
 * built_in - Implements the exit and env commands
 *
 * Return: Nothing
 */

void built_in(char **cmd_args, char *input)
{
    if (strcmp(cmd_args[0], "exit") == 0)
    {
        free(cmd_args);
	free(input);
        exit(0);
    }
    if (strcmp(cmd_args[0], "env") == 0)
    {
        _environ();
    }
}
