#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: No return.
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(e + '0');
				_putchar(d + '0');
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar('\n');
			}
			_putchar(c + '0');
		}
	}
}
