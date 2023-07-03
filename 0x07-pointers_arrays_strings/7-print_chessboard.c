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
	int i, b;

	for (i = 0; i< 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
