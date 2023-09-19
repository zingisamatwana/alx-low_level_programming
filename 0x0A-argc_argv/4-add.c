#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @s: The string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}

	return (1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
