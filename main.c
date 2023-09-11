#include "main.h"

/**
 * main - main function
 *
 * Return: 0 
 */

int main(__attribute__((unused)) int argc, char **argv, char **penviron)
{
	char *input = NULL, **cmd_args = NULL, buffer;
	/*char *filepath = NULL*/
	size_t n = 0;
	/*int i, terminal = isatty(0);*/
	int incrementor = 0;
	ssize_t chars_read = 0;
	(void) argv;

	while(1)
	{
		incrementor++;
		if (isatty(STDIN_FILENO))/*interactive mode*/
			/*console_display();*/
			printf("shell$ ");
		chars_read = getline(&input, &n, stdin);
		if (chars_read == -1)/*handles EOF*/
		{
			free_arr(cmd_args);
			free(input);
                       /* exit(0);*/
			return (-1);
		}
		cmd_args = parser(input);
		
		if (cmd_args[0] == NULL)
		{
			free(cmd_args);
			continue;
		}
		if (access(cmd_args[0], X_OK) == -1)
		{
			buffer = (incrementor + '0');
			input_err(argv[0], buffer, cmd_args[0]);
			continue;
		}
		/*if (access(cmd_args[0], X_OK) == -1)
		{
			printf("%s: %s No such file or directory\n", argv[0], cmd_args[0]);
		}*/
		exec(cmd_args, penviron);
		free_arr(cmd_args);
	}
	free(input);
	/*free_arr(cmd_args);*/
	return (0);
}
