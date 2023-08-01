#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given positon.
 * @head: points to the head of linked list.
 * @idx: the index of the new node.
 * @n: new node's data.
 * Return: addres of the new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		ptr = ptr->next;

		if (ptr == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);

}
