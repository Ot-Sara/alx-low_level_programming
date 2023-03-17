#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int p;

	for (n = '0'; n < '9'; n++)
	{
	for (m = n + 1; m <= '9'; m++)
	{
	for (p = m + 1; p <= '9'; p++)
	{
	if ((m != n) != p)
	{
	putchar(n);
	putchar(m);
	putchar(p);
	if (n == '7' && m == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
