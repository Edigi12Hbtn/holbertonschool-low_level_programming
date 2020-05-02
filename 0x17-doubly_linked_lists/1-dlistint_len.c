#include "lists.h"

/**
 * dlistint_len - length of double linked list.
 *
 * @h: header of list.
 *
 * Return: returns the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t Nodes = 0;

	while (h != NULL)
	{
		Nodes += 1;
		h = h->next;
	}

	return (Nodes);
}
