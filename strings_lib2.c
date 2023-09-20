#include "main.h"

/**
 * _strcat - concatenates two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *str1, const char *str2)
{
	char *ptr = str1;

	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return (ptr);
}

/**
 * _strcpy - copies a string of characters
 * @des: pointer to the copied string
 * @initial: the initial string to be copied
 *
 * Return: pointer to des
 */

char *_strcpy(char *des, const char *initial)
{
	unsigned int pos = 0;

	while (initial[pos] != '\0')
	{
		des[pos] = initial[pos];
		pos++;
	}
	des[pos] = '\0';
	return (des);
}

/**
 * _strdup - duplicates a string
 * @buff: string to be duplicated
 *
 * Return: pointer to the string duplicate
 */

char *_strdup(const char *buff)
{
	int pos = 0, len;
	char *ptr;

	if (!buff)
	{
		perror("null string");
		exit(0);
	}
	while (buff[pos] != '\0')
	{
		pos++;
	}
	ptr = validate_malloc(malloc((pos + 1) * sizeof(char)));
	for (len = 0; len < pos; len++)
	{
		ptr[len] = buff[len];
	}
	ptr[pos] = '\0';
	return (ptr);
	/*free(ptr);*/
	/*remember to free the value of _strdup each time you call it*/
}


