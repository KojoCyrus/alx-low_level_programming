#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - a function that retruns the sum of 2 numbers
*@a: is the first numner
*@b: is the second number
*
*Return: the sum of two numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - a function that returns the difference of 2 nums
*@a: the first number
*@b: the second number
*
*Return: returns the difference of two numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - a function that multiplies 2 numbers
*@a: the first number
*@b: the second number
*
*Return: returns the product of 2 numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - a function that divides two numbers
*@a: the first number
*@b: the second number
*
*Return: returns the division of 2 numbers
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - a function that returns the of a remainder of a division
*@a: the first number
*@b: the second number
*
*Return: returns remiander of a divition
*/
int op_mod(int a, int b)
{
	return (a % b);
}
