#include "main.h"

/**
*_memset - fills the first n bytes of the memory area
*@s is a memory area
*@b is a value that is going to be copied
*@n number of times to for b to be copied
*
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i > n; i++)

	{
	s[i] = b;
	}

	return (s);
}
