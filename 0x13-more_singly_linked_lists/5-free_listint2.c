#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *last_item;

	while (head)
	{
		last_item = head->next;
		free(head);
		head = last_item;
	}
}
