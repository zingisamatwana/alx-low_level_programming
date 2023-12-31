#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	if (head == NULL)
	{
		_putchar('[');
		_putchar('0');
		_putchar(']');
		_putchar('\n');
		return (0);
	}

	while (head)
	{
		print_node(head);
		node_count++;
		if (head < head->next)
			head = head->next;
		else
		{
			_putchar('-');
			_putchar('>');
			_putchar(' ');
			print_address((void *)head->next);
			_putchar('\n');
			break;
		}
	}

	return (node_count);
}

/**
 * print_node - Prints a listint_t node.
 * @node: Pointer to the node to be printed.
 */
void print_node(const listint_t *node)
{
	print_address((void *)node);
	_putchar(' ');
	print_number(node->n);
	_putchar('\n');
}

/**
 * print_address - Prints the address.
 * @p: Pointer to the address to be printed.
 */
void print_address(void *p)
{
	size_t i;
	unsigned long int address = (unsigned long int)p;
	char hex_digit;

	_putchar('[');
	_putchar('0');
	_putchar('x');

	if (address == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; address > 0; i++)
	{
		hex_digit = (address % 16);
		if (hex_digit < 10)
			hex_digit += '0';
		else
			hex_digit += 'a' - 10;
		_putchar(hex_digit);
		address /= 16;
	}

	_putchar(']');
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
