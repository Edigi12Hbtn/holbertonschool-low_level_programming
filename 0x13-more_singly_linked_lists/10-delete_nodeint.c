#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list.
 *
 * @head: head of linked list.
 * @index: is the index of the node that
 * should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;

	current_node = *head;
	while ((index > 1) && (current_node != NULL))
	{
		current_node = current_node->next;
		index--;
	}

	if (index > 1)
		return (-1);
	if (index == 1)
	{
		current_node->next = (current_node->next)->next;
		free(current_node->next);
	}
	else if (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	return (1);
}
