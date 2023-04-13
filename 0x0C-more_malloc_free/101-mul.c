#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*is_digit  checks if a sting contains something else but number
*@a: thisis the string we're gonna evaluate
*Return: 0 if a non-digit is found, if not, then 1
*/
int is_digit(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] < '0' || a[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
*_strlen - a function that retruns the length of string
*@a: thisis the string we're gonna evaluate
*Return: the length of string
*/
int _strlen(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
*errors - prints our error
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
*main - a program that multiplies two positive numbers
*@argc: counts the arguments
*@argv: argument variables
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	char *a1, *a2;
	int len1, len2, len, i, carry, digit1, digit2, *result, s = 0;

	a1 = argv[1], a2 = argv[2];
	if (argc != 3 || !is_digit(a1) || !is_digit(a2))
		errors();
	len1 = _strlen(a1);
	len2 = _strlen(a2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = a1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(a2) - 1; len2 >= 0; len2--)
		{
			digit2 = a2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			s = 1;
		if (s)
			_putchar(result[i] + '0');
	}
	if (!s)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
