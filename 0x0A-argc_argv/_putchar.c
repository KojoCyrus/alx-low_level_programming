#include <stdio.h>
#include "main.h"

/**
*_putchar - makes c a standard output
*@c: this is the character to print
*
*Return: 1 (success)
*On error, -1 is returned and errno is set appropriately
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
