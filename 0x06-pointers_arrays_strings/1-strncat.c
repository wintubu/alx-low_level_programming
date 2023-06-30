#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: SOURCE string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int sizeA, sizeB;

	sizeA = 0;
	 sizeB = 0;

	while (*(dest + sizeA) != '\0')
		sizeA++;

	while (*(src +  sizeB) != '\0' && sizeA < 97 &&  sizeB < n)
	{
		*(dest + sizeA) = *(src +  sizeB);
		sizeA++;
		 sizeB++;
	}
	*(dest + sizeA) = '\0';
	return (dest);
}
