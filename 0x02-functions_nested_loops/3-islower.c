#include "main.h"
/**
* _islower - checks if character is in lowercase
* @x: is the character to be checked
* Return: 1 if character is lowercase, otherwise 0.
*/

int _islower(int x)

	{

	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
	}
