#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 *
 * @h: head of linked list.
 * @idx: index where the new node is going to be added.
 * @n: number stored in the new node.
 *
 * Return: Always 0 (Success)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_to_new_node = *h, *new_node = NULL;

	if (h == NULL)
		return (NULL);

	while (prev_to_new_node != NULL && idx > 1)
		prev_to_new_node = prev_to_new_node->next, idx--;

	if (idx > 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	new_node->prev = prev_to_new_node;
	if (prev_to_new_node != NULL)
	{
		new_node->next = prev_to_new_node->next;

		if (new_node->next != NULL)
			(new_node->next)->prev = new_node;

		prev_to_new_node->next = new_node;
	}
	else
		free(new_node), new_node = NULL;

	return (new_node);
}
