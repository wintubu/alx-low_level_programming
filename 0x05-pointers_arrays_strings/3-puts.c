#include "main.h"

/**
 * _puts - functionfunction that prints a string, followed by a new line, to stdout
 * @strng: the string to print
 *
 * Description: print a string follow by a new line to stdout
 * Return: none
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
