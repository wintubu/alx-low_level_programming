#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Description: This function finds the first character in the string s
 * that matches any character specified in accept.
 * This does not include terminating null-characters.
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}

	return (0);
}
