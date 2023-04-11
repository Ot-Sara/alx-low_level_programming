#include "main.h"
#include <stdlib.h>

/**
 * argstostr - oncatenates all the arguments of our program
 * @ac: the int input
 * @av: the double pointer array
 * Return: NULL if ac == 0 or av == NULL or if it fails.
 * A pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l = l + ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	if (str[k] == '\0')
	{
		str[k++] = '\n';
	}
	}
	return (str);
}
