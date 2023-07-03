#include "main.h"

/**
 * *_memset - prottotype that fills the  memory with a constant byte.
 * @s: pointer to the byte -buffer
 * @b: a constant byte
 * @n: the number of buffer spaces to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
