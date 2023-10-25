#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t node_count = 0;

	if (head == NULL)
		exit(98);

	slow_ptr = head;
	fast_ptr = head;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		print_node(slow_ptr);
		node_count++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			print_node(slow_ptr);
			node_count++;
			exit(98);
		}
	}

	while (slow_ptr != NULL)
	{
		print_node(slow_ptr);
		node_count++;
		slow_ptr = slow_ptr->next;
	}

	return (node_count);
}

/**
 * print_node - Prints a listint_t node.
 * @node: Pointer to the node to be printed.
 */
void print_node(const listint_t *node)
{
	printf("[%p] %d\n", (void *)node, node->n);
}
