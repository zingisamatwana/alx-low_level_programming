/*
 *This file contains C source code
 *The code prints a string to stdout
 */
#include <stdio.h>

/**
 * swap_int - This is missing short description
 * @a: define a pointer
 * @b: define a pointer
 * for function Main
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
