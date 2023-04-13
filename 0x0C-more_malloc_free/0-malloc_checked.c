#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - a function that allocates memory using malloc
*@b: stands for the number of bytes
*
*Return: ptr
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
