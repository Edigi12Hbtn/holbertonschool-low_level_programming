#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to head pointer of singly list.
 * @idx: is the index of the list where the new node
 * should be added. Index starts at 0.
 * @n: position where the node will be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node; /*will be the n-1 node*/
	listint_t *new_node;

	current_node = *head;

	while ((idx > 1) && (current_node != NULL))
	{
		current_node = current_node->next;
		idx--;
	}

	if (idx > 1)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
		current_node = new_node;
	}

	return (current_node);
}
