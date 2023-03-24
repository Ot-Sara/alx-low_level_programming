#include "main.h"

/**
 * _isupper - Prints the uppercase character
 *
 * @c: the input character
 *
 * Return: 1 for upper letter. 0 for else.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
