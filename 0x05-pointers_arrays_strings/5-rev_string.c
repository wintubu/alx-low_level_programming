#include "main.h"

/**
 * rev_string - function with one argument that reverses string
 * @s: string to be reversed
 *
 * Description: reversing a string
 * Return: na
 */
void rev_string(char *s)
{
	int x, y, stmp, slen;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	y = 0;
	slen = x;
	x--;
	while (y < slen / 2)
	{
		stmp = s[y];
		s[y] = s[x];
		s[x] = stmp;
		x--;
		y++;
	}
}
