#include "main.h"

/**
*_strlen - this is going to return the length of string
*@s: string
*
*Return: longi
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
