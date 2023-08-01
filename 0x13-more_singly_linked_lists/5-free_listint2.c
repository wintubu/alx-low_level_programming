#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *LAST_ITEM;

	if (head == NULL)
		return;

	while (*head)
	{
		LAST_ITEM = (*head)->next;
		free(*head);
		*head = LAST_ITEM;
	}

	head = NULL;
}
