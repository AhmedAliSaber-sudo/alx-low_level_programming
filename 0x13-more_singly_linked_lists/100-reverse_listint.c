#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list.
 * @head: points to linked list.
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	(*head) = previous_node;

	return (*head);
}
