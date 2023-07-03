#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in s
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	if (s[a] == c)
		return (s + a);

	return (0);
}
