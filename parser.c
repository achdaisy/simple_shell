#include "main.h"

/**
 * parser - uses strtok to tokenize a string
 * @buff: the input read from getline
 *
 * Return: tokenized arguments
 */

char **parser(char *buff)
{
	char **args;
	char *arg1, *delim = " \n\t";
	int n = BUFFSIZE, i = 0;

	if (buff == NULL)
		return (NULL);
	/*if (buff == '\0')*/
		/*return NULL;*/
	if (buff[0] == ' ' && buff[strlen(buff) - 1] == ' ')
		/*exit (2);*/
		return (NULL);
	args = malloc(sizeof(char *) * n);
	if (args == NULL)
	{
		free_arr(args);
		perror("Couldn't allocate memory");
		/*exit(2);*/
		return (NULL);
	}
	arg1 = strtok(buff, delim);
	for (i = 0; arg1; i++)
	{
		args[i] = arg1;
		arg1 = strtok(NULL, delim);
	}
	args[i] = NULL;
	/*free_arr(args);*/
	/*Remember to free args whenever you call parser. */
	/*Can lead to memory leaks if called without freeing the previous*/
	return (args);
}
