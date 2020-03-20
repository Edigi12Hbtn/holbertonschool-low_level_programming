#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list..
 *
 * @head: head of lists.
 * @str: string.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *new_last_node;
	int len = 0;

	new_last_node = malloc(sizeof(list_t));
	if (new_last_node == NULL)
		return (NULL);

		if (*head != NULL)
		{
			last_node = (*head);

			while (last_node->next != NULL)
				last_node = last_node->next;

			last_node->next = new_last_node;
		}
		else
			*head = new_last_node;/*head = &new_last_node;*/

		new_last_node->next = NULL;
		new_last_node->str = strdup(str);

		while (str[len] != '\0')
			len++;

		new_last_node->len = len;

	return (new_last_node);
}
