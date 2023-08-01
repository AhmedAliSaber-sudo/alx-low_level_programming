#include "lists.h"

/**
 * add_nodeint - adds a new node at he beginning of a listint_t list.
 * @head: points to the head of the linked list.
 * @n: data of the new node.
 * Return: the address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}