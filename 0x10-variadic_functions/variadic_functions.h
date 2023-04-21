#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

/**
 * struct token - Struct token
 * @token: format token
 * @f: the function associated
 */

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
