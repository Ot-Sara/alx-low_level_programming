#include "main.h"

/**
 * _abs - Shows computes the absolute value
 * of the integer argument j
 *
 * @j: the input value as an integer.
 *
 * Return: 1 if j is greater than
 * 0. 0 for else.
 */
int _abs(int j)
{

	if (j >= 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);
	}
	_putchar('\n');
}
