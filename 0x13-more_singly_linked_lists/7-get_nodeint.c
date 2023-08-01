#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *node;

	if (head == NULL)
			return (NULL);

	node = head;
	while (a < index)
	{
		if (!node)
			return (NULL);
		node = node->next;
		a++;
	}
	return (node);
}


