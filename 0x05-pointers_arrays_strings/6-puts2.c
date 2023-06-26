#include "main.h"

/**
 * puts2 - function prototype
 * @str: string to be printed -char type pointer
 *
 * Description: print one char out of 2 of a string
 * Return: na
 */
void puts2(char *str)
{
	int z = 0;

	while (*(str + z) != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(*(str + z));
		}
		z++;
	}
	_putchar('\n');
}
