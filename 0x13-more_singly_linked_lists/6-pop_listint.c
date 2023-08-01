#include "lists.h"

/**
 * pop_listint - deletes hte head node and returns the head node's data.
 * @head: points to the linked list.
 * Return: the head node's data or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (data);

}
