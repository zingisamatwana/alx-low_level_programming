#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = string_length(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * string_length - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + string_length(s + 1));
}

/**
 * check_palindrome - Recursive helper function
 * to check if a string is palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1); /* Base case: palindrome found */

	if (s[start] != s[end])
		return (0); /* Characters at start and end don't match */

	return (check_palindrome(s, start + 1, end - 1));
}
