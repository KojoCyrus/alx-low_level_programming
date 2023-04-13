#include <stdlib.h>
#include "main.h"

/**
*_memset - there to fill the memory
*@a: memory area
*@b: character to be copied
*@n: number of times b is going to be copied
*
*Return: a
*/

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		a[i] = b;
	}

	return (a);
}


/**
*_calloc - a function that allocates memory for an array, using malloc
*@nmemb: number of elements
*@size: size of element
*
*Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
		return (ptr);
}

