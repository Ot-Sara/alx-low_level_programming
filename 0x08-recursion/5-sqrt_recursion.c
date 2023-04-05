#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square
 * root of a number
 * @n: the number
 * Return: the square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the
 * natural square root of a number
 * @n: the number to calculate the square root of
 * @i : the interator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (actual_sqrt_recursion(i, i + 1));
}
