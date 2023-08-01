#include "lists.h"
#include <stdio.h>
/**
 * print_listint -Prototype of function that Prints all the elements of a listint_t list.
 * @h: Is a pointer that points to the head of the list_t list.
 *
 * Return: Returns the number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t number_nodes = 0;
	while (h)
	{
		number_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (number_nodes);
}
