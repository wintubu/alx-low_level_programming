#include "lists.h"
int pop_listint(listint_t **head)
{
	int popped_list;
	listint_t *popped_head;

	if (!(*head) || !head)
		return (0);

	popped_head = (*head)->next;
	popped_list = (*head)->n;
	free(*head);
	*head = popped_head;

	return (popped_list);
}


