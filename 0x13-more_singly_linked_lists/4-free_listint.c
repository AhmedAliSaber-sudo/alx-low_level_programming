#include "lists.h"

/**
 * free_listint - frees al listint_t list.
 * @head: points to the head of linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
