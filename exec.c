#include "main.h"

/**
 * exec - executes a command
 *
 * Return: nothing
 */

void exec(char *filepath, char **arg, char **penviron)
{
	pid_t new_process;
	int p_status;
	
	new_process = fork();
	if (new_process < 0)
	{
		perror("couldn't create process");
		exit(-1);
	}
	else if(new_process == 0)
	{
		execve(filepath, arg, penviron);/*need to do some freeing*/
		/*free(filepath);*/
		free_arr(arg);
		perror(arg[0]);
		exit(2);
	}
	else
	{
		wait(&p_status);
		free(arg);
	}
}
