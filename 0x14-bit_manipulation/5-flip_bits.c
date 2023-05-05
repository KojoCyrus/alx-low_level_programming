#include "main.h"

/**
*flip_bits - a function that returns the number of bits you would
*need to flip to get from one number to another.
*@n: is the first number
*@m: is the second number
*
*Return: should return the number of bit to changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int count = 0;
	unsigned long int first;
	unsigned long int second = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		first = second >> a;
		if (first & 1)
			count++;
	}
	return (count);
}
