#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 1 for incorrect argument count, & 2 for negative bytes.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcodes = (unsigned char *)main;

	for (i = 0; i < num_bytes - 1; i++)
	{
		printf("%02x ", opcodes[i]);
	}

	printf("%02x\n", opcodes[i]);

	return (0);
}
