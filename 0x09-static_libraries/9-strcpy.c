#include "main.h"

/**
*_strcpy - a function that copies a string that is pointed to src
*@dest: where string is pasted
*@src: where string is copied from
*
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';
	return (dest);

}
