#include "main.h"

/**
 * print_a_str - prints a string of characters
 * @string: the string to be printed
 *
 * Return:nothing
 */

void print_a_str(char *string)
{
	while (*string != '\0')
	{
		print_a_char(*string);
		string++;
	}
}

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
