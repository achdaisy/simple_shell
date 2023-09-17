#include "main.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: the executable
 * @penviron: the environment
 *
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char **argv, char **penviron)
{
	char *input = NULL, *arg1, **cmd_args = NULL, /*buffer*/ *path_var, *filepath;
	size_t n = 0;
	int incrementor = 0;
	ssize_t chars_read = 0;
	(void) argv;

	while (1)
	{
		incrementor++;
		if (isatty(STDIN_FILENO))/*interactive mode*/
			printf("shell$ ");
		chars_read = getline(&input, &n, stdin);

		ctrl_d(chars_read, input);

		cmd_args = parser(input);
		if (cmd_args[0] == NULL)
		{
			free_arr(cmd_args);
			continue;
		}
		built_in(cmd_args, input);
		if (input[0] == '/')
			exec(cmd_args[0], cmd_args, penviron);
		else
		{
			path_var = return_path();
			arg1 = cmd_args[0];
			filepath = path_separator(path_var, arg1);
			exec(filepath, cmd_args, penviron);
			free(filepath);
		}

	}
	free(input);
	free_arr(cmd_args);
	return (0);
}
