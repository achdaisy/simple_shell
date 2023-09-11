#include "main.h"

/**
 * exec - executes a command
 *
 * Return: nothing
 */

void exec(char **arg, char **penviron)
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
		execve(arg[0], arg, penviron);/*need to do some freeing*/
		perror(arg[0]);
		exit(2);
	}
	else
	{
		wait(&p_status);
		/*free(arg);*/
	}
	/*free(filepath);*/
}
