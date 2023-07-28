#include "lists.h"

/**
 * free_list - free the linked list.
 * @head: linked list.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
