#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 *
 * @head:head pointer to start of linked list.
 */

void free_listint2(listint_t **head)
{
	while (head != NULL && *head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
}
