#include "lists.h"

/**
 * free_dlistint - free a double linked list.
 *
 * @head: head of linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr_to_free = head;

	while (head != NULL)
	{
		ptr_to_free = head;
		head = head->next;
		free(ptr_to_free);
	}
}
