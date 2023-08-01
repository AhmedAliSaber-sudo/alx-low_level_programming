#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets the head to NULL.
 * @head: points to the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = *head;
		*head->next;
		free(ptr);
	}
}
