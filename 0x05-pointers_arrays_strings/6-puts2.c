#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int i = 0;
	int l = strlen(str);

	while (str[i] != '\0' || i < l)
	{
		printf("%c", str[i]);
		i += 2;
	}

	printf("\n");
}
