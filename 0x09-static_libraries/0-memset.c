#include "main.h"

/**
* _memset - a block of memory
*@s: address of memory to be filled
*@b: value
*@n: number of bytes
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
