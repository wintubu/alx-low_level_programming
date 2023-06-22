#include "main.h"

/**
 * _isupper - uppercase letters
 * @char: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int char)

{
	if (char >= 'A' && char <= 'Z')
		return (1);
	else
		return (0);

}
