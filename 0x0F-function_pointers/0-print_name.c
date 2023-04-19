#include <stdio.h>
#include "function_pointers.h"

/**
*print_name -  a function that prints a name
*@name: the string to add
*@f: is the pointer to the function
*
*Return: nil
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return ;

	f(name);
}
