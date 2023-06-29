#include "main.h"
/**
 * _strncpy - copy strings, defining the size of second string.
 * @dest: string with copy
 * @src: string to be copied
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		*(dest + a) = *(src + a);
	for ( ; a < n; a++)
		*(dest + a) = '\0';
	return (dest);
}
