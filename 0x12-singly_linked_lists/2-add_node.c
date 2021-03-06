#include "lists.h"

/**
 * add_node - add  a node.
 *
 * @head: .
 * @str: .
 *
 * Return: ...
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->str = strdup(str);

		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		while (*((new_node->str) + len) != '\0')
		{
			len++;
		}

		new_node->len = len;
		new_node->next = (*head);
		(*head) = new_node;
	}

		return (*head);
}
