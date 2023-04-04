#include "main.h"

/**
*set_sting - this sets the value of the pointer to char
*@to: is a pinter to char
*@s: it's a pointer to another pointer
*/

void set_string(char **s, char *to)
{
	*s = to;
}
