#include "main.h"
/**
 * reverse_array - prints a  reversed array.
 * @a: array to bereversedd.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int swap, start, last;

	start = 0;
	last = n - 1;
	while (start < last)
	{
		swap = *(a + start);
		*(a + start) = *(a + last);
		*(a + last) = swap;
		start++;
		last--;
	}
}
