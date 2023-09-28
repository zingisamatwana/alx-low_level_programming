#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of 'n', or -1 if 'n' is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Return -1 for negative numbers */

	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: The current value to check for the square root.
 *
 * Return: The natural square root of 'n', or -1 if there is no exact
 *         integer square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1); /* Return -1 if there is no exact integer square root */

	return (_sqrt_helper(n, i + 1));
}
