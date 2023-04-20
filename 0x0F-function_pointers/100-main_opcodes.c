#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char  *argv[])
{
	int num_bytes;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (num_bytes--)
	{
		printf("%02hhx%s", *p++, num_bytes ? " " : "\n");
	}
	return (0);
}

