#include "main.h"
/**
* _isalpha - checks for alphabetic character regardless of case
* @alpt: the character to be checked
* Return: 1 if alpt  is a letter, 0 otherwise
*/
int _isalpha(int alpt)

	{
		return ((alpt >= 'a' && alpt <= 'z') || (alpt >= 'A' && alpt <= 'Z'));
	}
