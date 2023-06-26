#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string to be reveersed
 *
 * Description: function that prints a string in reverse
 * Return: na
 */
void print_rev(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	x -= 1;
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	};
	_putchar('\n');
}
