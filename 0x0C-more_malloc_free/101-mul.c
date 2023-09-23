#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of the multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1, len2, len_result, carry, i, j, k;
	char *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len_result = len1 + len2;
	result = calloc(len_result + 1, sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0') + carry;
			carry = product / 10;
			result[k] = (product % 10) + '0';
		}
		result[i] += carry;
	}

	if (result[0] == '0')
		return (result + 1);
	return (result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply(num1, num2);

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}
