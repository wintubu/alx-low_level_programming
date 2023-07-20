#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that iterates an array
 * @array: is an array to be iterated
 * @size: is the size of the array
 * @action: is something
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
