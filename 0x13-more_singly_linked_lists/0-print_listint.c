#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linked list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
