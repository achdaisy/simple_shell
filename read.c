#include "main.h"

/**
 * nread - reads user input
 * @buff: input parameter
 *
 * Return: nothing
 */

void nread(char *buff)
{
	char *input = NULL;
	size_t n = 0;
	ssize_t chars_read;

	chars_read = getline(&input, &n, stdin);
	if (chars_read == -1)/*handles EOF*/
	{
		free_arr(cmd_args);
                        free(input);
                        exit(0);
                }
