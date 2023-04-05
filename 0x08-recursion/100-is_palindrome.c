#include "main.h"

int check_pal(char *s, int i, int len);
int strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to reverse
 * Return: returns 1 if a string is a palindrome and
 * 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: the length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for
 * palindrome
 * @s: string to check
 * @i: the iterator
 * @len: the length of a string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
