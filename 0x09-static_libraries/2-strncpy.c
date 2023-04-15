#include "main.h"

/**
*_strncpy - a function to copy a string
*@dest: is an input value
*@src: is an input value
*@n: is also an input value
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
			j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
			j++;
	}

	return (dest);
}
