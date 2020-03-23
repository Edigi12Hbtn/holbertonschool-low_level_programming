#include "lists.h"

/**
 * get_nodeint_at_index - list that returns the
 * nth node of a listint_t linked list.
 *
 * @head: head of linked list.
 * @index: is the index of the node, starting at 0.
 *
 * Return: the nth node of a listint_t linked list.
 * if the node does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;

	current_node = head;
	while ((index > 0) && (current_node != NULL))
	{
		current_node = current_node->next;
		index--;
	}

	if (index != 0)
		return (NULL);

	return (current_node);
}
