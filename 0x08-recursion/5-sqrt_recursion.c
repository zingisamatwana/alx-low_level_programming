#include "main.h"

/**
 * _sqrt_recursive - Helper function to find the natural square root
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursive(int n, int guess)
{
	int next_guess = (guess + n / guess) / 2;

	if (next_guess == guess)
	{
		if (guess * guess == n)
			return (guess);
		else
			return (-1);
	}

	return (_sqrt_recursive(n, next_guess));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_recursive(n, n / 2));
}
