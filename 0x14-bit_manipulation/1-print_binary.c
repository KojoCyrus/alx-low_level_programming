#include "main.h"

/**
*print_binary - a function that prints the binary
*representation of a number.
*@n: a number
*/
void print_binary(unsigned long int n)
{
	int a;
	int count = 0;
	unsigned long int mask;

	for (a = 63; a >= 0; a--)
	{
		mask = n >> a;

		if (mask & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');

}
