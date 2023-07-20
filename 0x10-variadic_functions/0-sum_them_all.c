#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all: staring point
 * @n: variadic inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varlist;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(varlist, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(varlist, const unsigned int);
	}

	va_end(varlist);

	return (sum);
}
