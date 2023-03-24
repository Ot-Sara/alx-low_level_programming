#include "main.h"

/**
 * more_numbers - print 0-14
 * return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	       for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(j / 10, '0');
			}
			_putchar(j % 10 + '0');
		}
	}
	_putchar('\n');
}
