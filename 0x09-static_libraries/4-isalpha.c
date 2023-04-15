#include "main.h"

/**
*_isalpha - checks for alphabts
*@c: character we are checking
*
*Return: 1 is c is an alphabet, otherwise 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
