#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 *
 * @head:head pointer to start of linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_ptr;

	tmp_ptr = *head;
	head = NULL;
	while (tmp_ptr != NULL)
	{
		free(tmp_ptr);
		tmp_ptr = tmp_ptr->next;
	}
}
