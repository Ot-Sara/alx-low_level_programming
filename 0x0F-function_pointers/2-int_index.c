#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: a pointer to an array of integers
 * @size: the size of the array
 * @cmp: the comparison function
 * Return: the index of the first number in the list
 * for which the comparison function does not return 0.
 * -1 if no element in the array matches the comparison
 *  function or if the size of the array is less than or
 *  equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
