#include "main.h"

/**
 * _strlen - function for establishing length of a string
 * @s: String of characterdata type
 *
 * Description: strlen is a similiar function in C library to return length
 * Return: string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*(s + i) != '\0')
	{
		x++;
	}
	return (x);
}
