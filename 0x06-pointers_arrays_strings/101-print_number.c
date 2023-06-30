#include "main.h"
/**
 * print_number - prints integer numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int a, b, digit, digits, power;
	unsigned int intemp, numchar, number;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		intemp = -n;
	}
	else
	{
		intemp = n;
	}

	number = intemp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	a = 1;

	while (a < digits)
	{
		power = power * 10;
		a++;
	}
	b = power;
	while (b >= 1)
	{
		numchar = (intemp / b) % 10;
		_putchar(numchar + '0');
		b = b / 10;
	}
}
