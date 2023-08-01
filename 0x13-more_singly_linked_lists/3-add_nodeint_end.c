#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: points to the head pointer of linked list.
 * @n: data of the new node.
 * Return: address of the new element or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));

	if(new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}

	return (new_node);
}
