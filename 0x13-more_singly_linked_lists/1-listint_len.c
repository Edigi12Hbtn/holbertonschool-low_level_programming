#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 *
 * @h: head of linked list.
 *
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
