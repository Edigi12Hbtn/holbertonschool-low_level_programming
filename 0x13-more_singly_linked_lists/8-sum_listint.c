#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data (n) of a listint_t linked list.
 *
 * @head: head of linked list.
 *
 * Return: the sum of all the data (n) of a listint_t
 * linked list. If the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int ret = 0;
	listint_t *current_ptr;

	current_ptr = head;
	while (current_ptr != NULL)
	{
		ret += current_ptr->n;
		current_ptr = current_ptr->next;
	}

	return (ret);
}
