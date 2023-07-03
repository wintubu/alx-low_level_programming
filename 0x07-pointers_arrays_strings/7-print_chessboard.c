#include "main.h"

/**
 * print_chessboard - print the dashboard
 * @a: array of characters
 *
 * Description: a function to display the chessboard
 * Return: No return
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a< 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[a][b]);
		}
		_putchar('\n');
	}
}
