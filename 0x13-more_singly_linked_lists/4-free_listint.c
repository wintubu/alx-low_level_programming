#include "lists.h"

/**
 *free_list -Prototype of function that  Frees a list
 *@head:Is a pointer to the list head
 *
 */

void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head);
}
