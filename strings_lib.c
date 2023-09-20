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

/**
 * _strncmp - custom implementation of strncmp
 * @str1: the first string
 * @str2: the second string
 * @number: the specified number of strings to be compared
 *
 * Return: 0
 */

int _strncmp(const char *str1, const char *str2, size_t number)
{
	while (*str1 && (*str1 == *str2) && (number > 0))
	{
		str1++;
		str2++;
		number--;
	}
	if (number == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)str1 - *(unsigned char *)str2);
	}
}
