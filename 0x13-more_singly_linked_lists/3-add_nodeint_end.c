#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: head of list.
 * @n: number stored for the new last node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_ptr;
	listint_t *new_node;

	temp_ptr = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (temp_ptr != NULL)
	{
		while (temp_ptr->next != NULL)
		{
			temp_ptr = temp_ptr->next;
		}
		temp_ptr->next = new_node;
	}
	else
	{
		(*head) = new_node;
	}
	return (new_node);
}
