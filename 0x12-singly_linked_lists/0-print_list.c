#include "lists.h"

/**
 * print_list - prints linked lists elements.
 *
 * @h: pointer to header list.
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *string;
	const list_t *current_list;

	current_list = h;
	while (current_list->next != NULL)
	{
		n++;
		string = current_list->str;
		if (string != NULL)
			printf("[%u] %s\n", current_list->len, string);
		else
			printf("[0] (nil)\n");
		current_list = current_list->next;
	}

	n++;
	string = current_list->str;
	if (string != NULL)
		printf("[%u] %s\n", current_list->len, string);
	else
		printf("[0] (nil)\n");

	return (n);
}
