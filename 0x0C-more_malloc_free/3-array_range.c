#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minumum value
 * @max: the maximum value
 * Return: the pointer to the newly created array.
 * NULL if min > max or malloc fails.
 */

int *array_range(int min, int max)
{
	int num_elements;
	int *ptr, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	num_elements = max - min + 1;
	ptr = (int *)malloc(num_elements * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num_elements; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
