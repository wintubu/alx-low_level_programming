#include "lists.h"
int pop_listint(listint_t **head)
{
	int datas;
	listint_t *popped_head;

	if (!(*head) || !head)
		return (0);

	*popped_head; = (*head)->next;
	datas = (*head)->n;
	free(*head);
	*head = *popped_head;

	return (datas);
}


