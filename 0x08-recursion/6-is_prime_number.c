#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - detects a prime number
 * @n: the number to test
 * Return: 1 if the input integer is a prime
 * number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is a
 * prime recursively
 * @n: the number to evaluate
 * @i: the interator
 * Return: 1 if the input integer is a prime
 * number, otherwise return 0.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}

