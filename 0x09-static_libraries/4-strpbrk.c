#include "main.h"

/**
*_strpbrk - this is the entry point
*@s: is an input value
*@accept: is an input value
*
*Return: 0 (success)
*/

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
		s++;
	}
	return ('\0');
}
