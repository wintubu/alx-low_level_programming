#include "lists.h"
#include <stdio.h>

/**
 * listint_len -Prototype of function that returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t numer_nodes = 0;
	if (!h)
		return (0);


	while (h)
	{
		numer_nodes++;
		h = h->next;
	}

	return (numer_nodes);
}
