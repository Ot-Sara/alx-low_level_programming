#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * parameter on each element of an array
 * @array: a pointer to the first element of an array
 * of integers
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{	
		action(array[i]);
	}
}
