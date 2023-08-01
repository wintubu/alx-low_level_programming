#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *new_head = *head;
	unsigned int old_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = new_head;
		*head = new_node;
		return (new_node);
	}

	for (old_node = 0; old_node < (idx - 1); old_node++)
	{
		if (new_head == NULL || new_head->next == NULL)
			return (NULL);

		new_head = new_head->next;
	}

	new_node->next = new_head->next;
	new_head->next = new_node;

	return (new_node);
}
