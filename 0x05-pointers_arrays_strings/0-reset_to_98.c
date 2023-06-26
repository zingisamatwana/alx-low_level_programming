/*
 *This file contains C source code
 *The code prints a string to stdout
 */
#include <stdio.h>
/**
 *reset_to_98 - set point variable to 98
 *
 */
void reset_to_98(int *n)
{
	*n=98;
}

/**
 * main - This is missing short description
 * Description
 * for function Main
 * Return: 0 always
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
