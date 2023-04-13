#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb
 * elements of size bytes each
 * @nmemb: input integer
 * @size: input integer
 * Return: a pointer to the allocated memory. NULL if
 * nmemb or size is 0 or if  malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i = 0;
	unsigned char *p;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = (unsigned char *) ptr;
	for (i = 0; i < total_size; i++)
	{
		p[i] = 0;
	}
	return (ptr);
}
