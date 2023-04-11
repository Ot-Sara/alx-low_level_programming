#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer that points to a newly
 * allocated space in memory. NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int c, i;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = c = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[c] != '\0')
	{
		c++;
	}
	s = malloc(sizeof(char) * (i + c + 1));
	if (s == NULL)
		return (NULL);

	i = c = 0;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		s[i] = s2[c];
		i++;
		c++;
	}
	s[i] = '\0';
	return (s);
}
