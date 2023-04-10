#include <stdio.h>
#include "main.h"

/**
*main - printing argv and argc
*@argc: counts the number of arguments
*@argv: argument variables
*
*Return: 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
