#include "main.h"

/**
 * _memcpy - copies bytes in memory
 *
 * @src: the first memory area
 * @dest: the second memory area
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
