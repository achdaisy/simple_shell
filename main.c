#include "main.h"

/**
 * main - main function
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

	while(1)
	{
		incrementor++;
		if (isatty(STDIN_FILENO))/*interactive mode*/
			printf("shell$ ");
		chars_read = getline(&input, &n, stdin);
		if (chars_read == -1)
                {
                        free(input);
                        /*free_arr(cmd_args);*/
                        exit (0);
                }
		cmd_args = parser(input);
		if (cmd_args[0] == NULL)
		{
		 	free_arr(cmd_args);
			continue;
		}
		/*if (chars_read != -1 && cmd_args[i] != NULL)*/
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
		path_var = return_path();
		arg1 = cmd_args[0];
		filepath = path_separator(path_var, arg1);
		/*if (access(filepath, X_OK) == 0)
                {
                }
                else
                {
                        buffer = (incrementor + '0');
                        input_err(argv[0], buffer, cmd_args[0]);
                }*/
		exec(filepath, cmd_args, penviron);

	}
	free(input);
	free_arr(cmd_args);
	return (0);
}
