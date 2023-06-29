#include "main.h"
/**
 * _strncat - concatenate strings and defines  the lenghth of second string.
 * @dest: string with concartenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthA, lengthB;

	lengthA = 0;
	lengthB = 0;

	while (*(dest + lengthB) != '\0')
		lengthA++;
	while (*(src + lengthB) != '\0' && lengthA < 97 && lengthB < n)
	{
		*(dest + lengthA) = *(src + lengthB);
		lengthA++;
		lengthB++;
	}
	*(dest + lengthA) = '\0';
	return (dest);
}
