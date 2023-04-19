#include <stdlib.h>
#include "3-calc.h"
/**
*get_op_func - unction that selects the correct function
*to perform the operation asked by the user
*@s: th eoperator
*
*Return: the resukt of the coreesponding operation
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	i++;

	return (ops[i].f);
}
