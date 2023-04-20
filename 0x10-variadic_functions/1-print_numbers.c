#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - a function that prints numbers, followed by a new line
*@separator: a sring to be printed
*@n: number of inputs
*
*@...: allows for more inputs
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
