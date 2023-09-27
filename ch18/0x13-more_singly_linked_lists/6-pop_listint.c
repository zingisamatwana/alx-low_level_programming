#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The head node's  0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
