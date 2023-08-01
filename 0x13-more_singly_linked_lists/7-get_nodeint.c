#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list.
 * @head: points to the head of the linked list.
 * @index: nth node.
 * Return: nth node or NULL if failed.
 */

listint_t *get_nodeint_at_index(listint_t *headj, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	if (i == index)
		return (head);

	return (NULL);
}
