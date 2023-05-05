#include "main.h"

/**
 * get_endianness - determines the byte order of the
 * computer that is running on
 * Return: 0 for big. 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
