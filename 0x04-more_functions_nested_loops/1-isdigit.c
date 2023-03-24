#include "main.h"

/**
 * _isadigit - checks if numbers are 0-9
 *
 * @c: the char to be checked
 *
 * Return: 1 if c is a digit. 0 if else.
 */

int _isadigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
