#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list.
 * @h: a Point to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h);
{
	size-t node_count = 0;

	while (h != NULL)
	{
		/* If str is NULL, print "[0] (nil)" */
		if (h->str  == NULL)
		{
			printf("[] (nil)\n");

		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		node_country++;
		h = h->next;
	}

	return (node_count);
}
