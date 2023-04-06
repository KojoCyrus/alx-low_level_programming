#include "main.h"

/**
*_sqrt_recursion - returns the natural square root of a number
*@n:  does not have a natural square root
*
*Return: -1 (success)
*/

int actual_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}


/**
*actual_sqrt_recursion - recursing to find the numner
*@n: the number we're finding the square root of
*@i: iterator
*
*Return: return the result of the square root
*/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

