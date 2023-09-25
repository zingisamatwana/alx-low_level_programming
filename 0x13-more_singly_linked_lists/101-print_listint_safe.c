#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t node_count = 0;

	if (head == NULL)
	{
		exit(98);
	}

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
	char buffer[15];
	int n = node->n;
	int i = 0;
	char is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	if (n == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (n != 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
	}

	if (is_negative)
	{
		buffer[i++] = '-';
	}

	for (int j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}

	putchar('\n');
}
