#include "main.h"

/**
*_strlen_recursion - returns length of string
*@s: the string we're meauring
*Return: length (success)
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}

