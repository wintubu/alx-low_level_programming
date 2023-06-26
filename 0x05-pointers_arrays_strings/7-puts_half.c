#include "main.h"

/**
 * puts_half - function with prototype
 * @str: char type to be printrd
 *
 * Description: prints half of a string
 * Return: na
 */
void puts_half(char *str)
{
	int x, slen;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	slen = x;
	if (slen % 2 != 0)
		slen = (slen + 1) / 2;
	else
		slen /= 2;
	while (slen < x)
	{
		slen++;
		_putchar(*(str + slen - 1));
	}
	_putchar('\n');
}
