#include <stdlib.h>
#include <stdio.h>

/**
 * multiply - multiplies 2 positive numbers
 * @num1: the first number
 * @num2: the second number
 * Return: the result
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	unsigned int mul = 0;

	while (num1 > 0)
	{
		if (num1 & 1)
		{
			mul = mul + num2;
		}
		num1 >>= 1;
		num2 <<= 1;
	}
	return (mul);
}
/**
 * isNumeric - checks if a string is composed of digits only
 * @str: the string
 * Return: 0 if str is NULL. Else 1.
 */
int isNumeric(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = multiply(num1, num2);
	printf("%u\n", mul);
	return (0);
}
