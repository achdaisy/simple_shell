#include "main.h"

/**
 * print_a_char - prints a single character
 * @a: the character to be written
 *
 * Return: 1 else -1
 */

int print_a_char(char a)
{
	return (write(1, &a, 1));
}

/**
 * print_a_str - prints a string of characters
 * @string: the string to be printed
 *
 * Return:nothing
 */

int print_a_str(char *string)
{
	int i = 0, track = 0;

	while (string[i])
	{
		track += print_a_char(string[i++]);
	}

	return (track);
}
