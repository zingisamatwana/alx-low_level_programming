#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails, return NULL.
 *         Otherwise, return a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
