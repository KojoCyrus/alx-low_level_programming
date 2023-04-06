#include "main.h"

/**
*is_prime_number - tells us if a number is a prime number or not
*@n: number we are inspecting
*@i: iterator
*
*Return: 0 (succes)
*/

int actual_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
*actual_prime - tells us if an integer is a prime number or not
*@n: number to inspect
*@i: iterator
*
*Return: 1  if number is prime and 0 if it's not
*/

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && 1 > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
