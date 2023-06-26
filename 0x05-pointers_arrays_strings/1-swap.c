#include "main.h"

/**
 * swap_int - functin having  two int type pointer argument
 * @ x: 1st argument int type
 * @y: 2nd argument int type
 *
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
