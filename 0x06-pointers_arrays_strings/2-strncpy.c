#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @src: the first string
 * @dest: the second string
 * @n: the most number of bytes from src
 *
 * Return: the result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

