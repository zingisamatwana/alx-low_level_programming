#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0; /* Initialize the element count to 0 */

	while (h != NULL)
	{
		element_count++; /* Increment the element count */
		h = h->next;     /* Move to the next node */
	}

	return (element_count); /* Return the total number of elements */
}
