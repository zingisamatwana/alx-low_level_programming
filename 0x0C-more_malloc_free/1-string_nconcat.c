#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with the first n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int s1_len = 0, s2_len = 0, i;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	/* Determine the actual number of bytes to concatenate */
	if (n >= s2_len)
		n = s2_len;

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * (s1_len + n + 1));

	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];

	/* Copy the first n bytes of s2 to the concatenated string */
	for (i = 0; i < n; i++)
		concatenated[s1_len + i] = s2[i];

	/* Null-terminate the concatenated string */
	concatenated[s1_len + n] = '\0';

	return (concatenated);
}
