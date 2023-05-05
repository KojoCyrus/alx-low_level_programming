#include "main.h"

/**
*get_endianness - a function that checks the endianness.
*
*Return: 1 if it's big, otherwise, 0
*/
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
