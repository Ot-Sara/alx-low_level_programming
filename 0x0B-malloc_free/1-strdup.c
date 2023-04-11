#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - eturns a pointer to a new string
 * which is a duplicate of the string str
 * @str: the string
 * Return: NULL if str = NULL. On success,returns
 * pointer to the duplicated string. NULL if
 * insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;

	int i, j = 0;

	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;


	s = malloc(sizeof(char) * (i + 1));



	if (s == NULL)

		return (NULL);



	for (j = 0; str[j]; j++)

		s[j] = str[j];



	return (s);

}
