#include "main.h"

/**
*binary_to_uint - a function that converts a
*binary number to an unsigned int.
*@b: is pointing to a string of 0 and 1 chars
*
*Return: is pointing to a string of 0 and 1 chars
*/
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int conv_num = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		conv_num = 2 * conv_num + (b[a] - '0');
	}
	return (conv_num);

}
