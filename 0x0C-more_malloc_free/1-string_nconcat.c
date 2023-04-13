#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and the first
 * n characters of s2 together
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 * Return: NULL if the function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));

	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}

