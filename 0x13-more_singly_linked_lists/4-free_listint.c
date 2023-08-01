#include "lists.h"

/**
 *free_list -Prototype of function that  Frees a list
 *@head:Is a pointer to the list head
 *
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}

