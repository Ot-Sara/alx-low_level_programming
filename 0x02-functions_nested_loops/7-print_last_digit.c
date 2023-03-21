#include "main.h"

/**
 * print_last_digit - Shows the value of the last
 * digit
 *
 * @i: the input value as an integer.
 *
 * Return: last digit
 */
int print_last_digit(int i)
{

	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}

