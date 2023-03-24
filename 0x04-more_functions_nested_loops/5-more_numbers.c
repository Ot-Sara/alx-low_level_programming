#include "main.h"

/**
 * print_most_numbers - print 0-9
 * return: void
 */

void print_most_numbers(void)
{
	int a, b;

	for (a = '0'; a <= '10'; a++)
	{
	       for (b = '0'; b <= '14'; b++)
		{
			if (b >= 10)
			{
				_putchar('1');
			}
			_putchar(a%10 + '0');
		}
        }
        _putchar('\n');
}
