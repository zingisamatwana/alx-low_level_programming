#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Prevent unused variable warning */

	printf("%d\n", argc - 1);

	return (0);
}
