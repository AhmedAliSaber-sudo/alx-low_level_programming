#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at given position.
 * @head: points to the head of linked list.
 * @index: the index of the deleted node.
 * Return: 1 if succeded, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr1, *ptr2;

	if (*head == NULL)
		return (-1);

	ptr1 = *head;

	if (index == 0)
	{
		*head = ptr1->next;
		free(ptr1);
		return (1);
	}

	for (i = 0; i < index - 1 && ptr1 != NULL; i++)
	{
		ptr1 = ptr1->next;
	}

	if (i != (index - 1) || ptr1->next == NULL)
		return (-1);


	ptr2 = ptr1->next;
	ptr1->next = (ptr1->next)->next;
	free(ptr2);

	return (1);
}

