#include "main.h"
/**
 * string_toupper - changes the lowercase letters to uppercase.
 * @s: analyized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
		{
			*(s + a) = *(s + a) - 32;
		}
		a++;
	}
	return (s);
}
