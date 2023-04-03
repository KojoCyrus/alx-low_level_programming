#include "main.h"

/**
*_memset - fills the first n bytes of the memory area
*@s: is a memory area
*@b: is the value that is desired
*@n: is number of the bytes that is going to be changed
*
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)

	{
	s[i] = b;
	n--;
	}

	return (s);
}
