#include "lists.h"

/**
 * list_len - prints the length of list_t linked list.
 * @h: linked list.
 * Return: number of nodes/elements (length) in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
