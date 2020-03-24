#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: pointer to head of linked list that has a loop.
 *
 * Return:  a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_next = NULL;
	listint_t *ptr_bef = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		ptr_next = (*head)->next;

		(*head)->next = ptr_bef;

		ptr_bef = *head;/*This will be the bef ptr in the next step*/

		*head = ptr_next;
	}
	*head = ptr_bef;
	return (*head);
}
