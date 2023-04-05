#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * actual_sqrt_recursion - recurses ro find the
 * natural square root of a number
 * @n: the number
 * @i: the interator
 * Return: the resulting square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square
 * root of a number
 * @n: the number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
