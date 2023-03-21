#include "main.h"

/**
 * print_sign - Shows 1 and prints + if
 * the input is greater than 0.
 * Shows 0 and prints 0 if the input is 0.
 * Shows -1 and prints - if the input is
 * less than 0.
 *
 * @n: the input number as an integer.
 *
 * Return: 1 if n is greater than
 * 0. 0 for n equal to 0. -1 for
 * n less than 0.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
