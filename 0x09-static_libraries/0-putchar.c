#include <unistd.h>

/**
*_putchar - writes c to standard output
*@c: is the character we want to print
*
*Return: 1 on success else return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
