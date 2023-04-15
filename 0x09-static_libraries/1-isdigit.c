#include "main.h"

/**
*_isdigit - checks through digits from 0 to 9
*@c: this is the int to be checked
*
*Return: 1 if c is a digit, otherwise return 0
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
