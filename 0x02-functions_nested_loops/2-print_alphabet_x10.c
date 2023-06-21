#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/

void print_alphabet_x10(void)
{
	char alpt;
	int i;
	i = 0;
		while (i < 10)
		{
			alpt = 'a';
			while (alpt <= 'z')
			{
				_putchar(alpt);
				alpt++;
			}
			_putchar('\n');
			i++;
		}
}
