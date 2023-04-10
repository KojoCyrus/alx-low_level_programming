#include <stdio.h>
#include "main.h"

/**
*_twonum - converting string to a number
*@s: string
*
*Return: 0 (success)
*/

int _twonum(char *s)
{
int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);

}


/**
*main - prints the result of a multiplication
*@argc: counts arguments
*@argv: argument variables
*
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{

	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _twonum(argv[1]);
	num2 = _twonum(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
