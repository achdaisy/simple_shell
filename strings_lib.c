#include "main.h"

/**
 * _strlen - returns the length of a string
 * @buff: a character array
 *
 * Return: no of chars in buff
 */

size_t _strlen(const char *buff)
{
	size_t size = 0;

	while (buff && buff[size])
	{
		size++;
	}
	return (size);
}

/**
 * _strcmp - used to compare two strings.
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if successful
 */

int _strcmp(const char *str1, const char *str2)
{
	unsigned int pos = 0;

	while (str1[pos] != '\0' && str2[pos] != '\0')
	{
		if (str1[pos] < str2[pos])
		{
			return (-1);
		}
		else if (str1[pos] > str2[pos])
		{
			return (1);
		}
		pos++;
	}
	if (str1[pos] == '\0' && str2[pos] == '\0')
	{
		return (0);
	}
	else if (str1[pos] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
