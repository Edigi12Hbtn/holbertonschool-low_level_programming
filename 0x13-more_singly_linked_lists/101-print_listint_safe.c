#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list.
 *
 * @head: head of linked list.
 *
 * Return: the number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	const listint_t *ptr;
	const listint_t *ptr2;

	if (head == NULL)
		exit(98);

	ptr = head;
	ptr2 = head;
	while (ptr != NULL)
	{
		len++;
		printf("[%p] %d\n", (void *)ptr, ptr->n);

		while (ptr2 != ptr)
		{
			if (ptr->next == ptr2)
			{
				printf("-> [%p] %d\n", (void *)ptr->next, (ptr->next)->n);
				exit(98);
			}
			ptr2 = ptr2->next;
		}
		ptr2 = head;

		ptr = ptr->next;
	}

	return (len);
}
