#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @nu: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int nu)
{
	int a;

	if (nu < 0)
		nu = -nu;
	a = nu % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');     
	return (a);
}
