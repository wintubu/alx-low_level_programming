#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the
 *                   end of listint_t.
 * @head: Is tghe pointr to the address of the
 *        head of the listint_t.
 * @n: The integer thet the added  new node will contain.
 *
 * Return: NULL- if th function fails
 *        else - return the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne_node, *lst_node;

	ne_node = malloc(sizeof(listint_t));
	if (!ne_node)
		return (NULL);

	ne_node->n = n;
	ne_node->next = NULL;

	if (!(*head))
	{
		*head = ne_node(n);
		return (*head);
	}


	else
	{
		lst_node = *head;
		while (lst_node->next != NULL)
			lst_node = lst_node->next;
		lst_node->next = ne_node;
	}

	return (*head);
}
