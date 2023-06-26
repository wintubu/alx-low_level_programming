#include "main.h"

/**
 * swap_int - functin having  two int type pointer argument
 * @ x: 1sinteger to be swapped
 * @y: 2nd argument integer to be swapped
 * Description: Using pointer to change value of x and y
 * Return: void
 */
void swap_int(int *x, int *y)
{
	int zwap;

	zwap = *x;
	*x = *y;
	*y = zwap;
}
