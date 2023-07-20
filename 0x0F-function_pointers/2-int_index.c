#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function that returns the  index place if comparison = true, else -1
 * @array:an array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
