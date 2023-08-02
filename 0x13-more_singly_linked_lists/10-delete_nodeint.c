#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *node, *start;
	unsigned int a;

	if (!(*head))
		return (-1);
	a = 0;
	start = NULL;
	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (a == index)
		{
			start->next = node->next;
			free(node);
			return (1);
		}
		start = node;
		node = node->next;
		a++;
	}

	return (-1);
}
