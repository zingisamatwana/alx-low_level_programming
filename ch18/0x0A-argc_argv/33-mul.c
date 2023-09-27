#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array of string containing the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");

		return (1);
	}
	else
	{
		int p = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", p);

	}

	return (0);
}
