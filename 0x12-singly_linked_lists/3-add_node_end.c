#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to end of linked list.
 * @head: linked list.
 * @str: data for new node.
 * Return: address of new element, or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp; /* create new node */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /* check if malloc errored */
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
