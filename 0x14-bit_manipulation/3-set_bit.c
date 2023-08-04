#include "main.h"

/**
 *set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: a pointer to the number we are changing
 *@index: the index
 *
 * 
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
