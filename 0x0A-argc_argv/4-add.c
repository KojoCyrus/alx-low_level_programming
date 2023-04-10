#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
*_checknum - checking if srings are digits
*@str: an array
*
*Return: 0 (success)
*/

int _checknum(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*countting the string*/

	{
		if (!isdigit(str[count])) /*check it the str is/are digits*/
		{
			return (0);
		}

		count++;

	}
	return (1);
}

/**
*main - a program that adds positive numbers
*@argc: counts the arguments
*@argv: arguments variables
*
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*scans through the array*/
	{
		if (_checknum(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else
		{
		printf("Error\n");
		return (1);
		}

		count++;

	}

	printf("%d\n", sum);

	return (0);
}


