#include "main.h"

/**
 * _isadigit - Prints the digit
 *
 * @c: the char input to be checked
 *
 * Return: 1 if c is a digit. 0 if else.
 */

int _isadigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
