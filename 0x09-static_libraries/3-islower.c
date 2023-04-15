#include "main.h"

/**
*_islower - checks for lowercase
*@c: is the character to be checked
*
*Return: should return 1 if c is lowercase, otherwise 0
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
