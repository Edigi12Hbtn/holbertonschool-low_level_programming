#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list.
 *
 * @head: head of linked list.
 * @index: index of node in linked list to look for.
 *
 * Return: pointer to node or NULL if it failed.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index != 0)
	{
		head = head->next;
		index--;
	}

	if (index != 0)
		return (NULL);
	else
		return (head);
}
