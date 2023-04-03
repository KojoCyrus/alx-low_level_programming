#include "main.h"

/**
*_memcpy - is a function that copies bytes from mem area
*@dest: is the memory area
*@src: is the memory area where bytes will be copied from
*@n: is number of the bytes that is going to be copied
*
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r > i; r++)

	{
	dest[r] = src[r];
	n--;
	}

	return (dest);
	}
