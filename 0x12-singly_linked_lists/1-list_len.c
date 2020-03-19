#include "lists.h"

/**
 * list_len - lenght of linked lists.
 *
 * @h: head of linked lists.
 *
 * Return: returns the number of
 * elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
