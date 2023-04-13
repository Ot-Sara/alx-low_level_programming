#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using
 * @ptr: the pointer
 * @old_size: the size, in bytes, of the allocated
 * space for ptr
 * @new_size: the new size, in bytes of the new
 * memory block
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size, i = 0;
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	copy_size = (old_size < new_size) ? old_size : new_size;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < copy_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
