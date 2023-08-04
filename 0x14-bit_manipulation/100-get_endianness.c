#include "main.h"

/**
 *get_endianness - a function that checks the endianness
 *
 *Return: 0 when it's big, 1 when it's little
*/
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
