#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element (new node), or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* Declare the new_node variable at the beginning */

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* Initialize new_node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head; /* Set the next pointer to the current head */

	*head = new_node; /* Update the head to point to the new_node */
	return (new_node);
}
