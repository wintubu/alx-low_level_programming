#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -starting Point
 * @separator: space
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep;
	va_list varlist;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(varlist, n);

	if (n > 0)
		printf("%d", va_arg(varlist, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(varlist, int));
	printf("\n");
	va_end(varlist);
}
