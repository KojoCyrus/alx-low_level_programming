#include "main.h"

/**
*get_bit - a function that returns the value of
*a bit at a given index.
*@n: a number
*@index: an index
*
*Return: the value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int valbit;

	if (index > 63)
		return (-1);
	valbit = (n >> index) & 1;
		return (valbit);
}
