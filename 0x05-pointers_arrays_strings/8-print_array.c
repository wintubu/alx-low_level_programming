#include "main.h"
#include "stdio.h"

/**
 * print_array - function with two argument
 * @a: first argument pointer int type
 * @n: second argument int type
 *
 * Description: prints n element of an array of integers
 * Return: na
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
