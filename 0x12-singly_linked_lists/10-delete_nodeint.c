#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *current_node, *prefix;

	if (!(*head))
		return (-1);
	a = 0;
	prefix = NULL;
	current_node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(current_node);
		return (1);
	}
	while (current_node)
	{
		if (a == index)
		{
			prefix->next = current_node->next;
			free(current_node);
			return (1);
		}
		prefix = current_node;
		current_node = current_node->next;
		a++;
	}

	return (-1);
}

