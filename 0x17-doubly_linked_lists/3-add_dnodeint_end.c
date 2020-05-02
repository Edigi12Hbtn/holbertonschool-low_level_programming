#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to head of linked list.
 * @n: integer of new last node of linked list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_ptr = *head;
	dlistint_t *last_node_ptr = NULL;

	if (head == NULL)
		return (NULL);

	while (node_ptr != NULL && node_ptr->next != NULL)
		node_ptr = node_ptr->next;

	last_node_ptr = malloc(sizeof(dlistint_t));
	if (last_node_ptr == NULL)
		return (NULL);

	last_node_ptr->n = n;
	last_node_ptr->next = NULL;
	last_node_ptr->prev = node_ptr;
	if (node_ptr != NULL)
		node_ptr->next = last_node_ptr;
	else
		*head = last_node_ptr;

	return (last_node_ptr);
}
