#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 *
 * Return: the string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
