#include "main.h"
#include <string.h>

/**
 * _memset - set bytes in memory
 *
 * @s: the pointer to the memory area
 * @b: constant byte
 * @n: the size of the memory
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

