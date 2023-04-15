#include "main.h"

/**
*_memcpy - this is a function that compies the memory area
*@dest: the memory where data is stored
*@src: the memory where it's copied
*@n: number of bytes
*
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
