#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: head of linked list.
 *
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int ret = 0;

	if (*head != NULL)
	{
		ret = (*head)->n;
		free(*head);
		*head = ((*head)->next);
	}

	return (ret);
}
