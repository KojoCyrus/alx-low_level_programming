#include "main.h"

/**
 *clear_bit - a function that sets the value of a bit to 0 at a given index.
 *@n: a pointer to the number to be changed
 *@index: this is the index
 *
 * Return: 1 for success and -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
