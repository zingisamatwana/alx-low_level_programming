/*
 *This file contains C source code
 *The code prints a string to stdout
 */
#include <stdio.h>

/**
 * main - This is missing short description
 * Description
 * for function Main
 * Return: 0 always
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
