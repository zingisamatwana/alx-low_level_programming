#include "lists.h"

/**
 * sum_listint - Returns list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
