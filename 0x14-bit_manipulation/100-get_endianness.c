#include "main.h"

/**
*get_endianness - a function that checks the endianness.
*
*Return: should return 0 if it's big, else 1
*/
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
