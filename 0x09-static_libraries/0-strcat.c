#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @src: the first string
 * @dest: the second string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
	{
		c1++;
	}
	for (c2 = 0; src[c2]; c2++)
	{
		dest[c1] = src[c2];
		c1++;
	}
	return (dest);
}
