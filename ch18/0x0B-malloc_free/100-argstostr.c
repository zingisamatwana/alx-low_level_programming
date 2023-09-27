#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: A pointer to the new concatenated string.
 *         NULL if ac == 0, av == NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1; /* +1 for newline character */
		len = 0;
	}

	str = malloc(sizeof(char) * total_len + 1); /* +1 for null-terminator */

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}

	str[len] = '\0';

	return (str);
}
