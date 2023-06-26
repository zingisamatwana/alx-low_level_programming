/*
 *This file contains C source code
 *The code prints a string to stdout
 */
#include <stdio.h>
#include <string.h>

/**
 * print_rev - This is missing short description
 * @s: define a char variable
 *Return: string length
 */
void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
