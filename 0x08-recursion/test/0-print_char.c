#include <unistd.h>

/*
 * print_char - A recursion funciton that prints letters of alphabet from a-z
 * @c: A variable of type char
 *
 */

void print_char(char c)
{
	write(1, &c, 1);
}

/*
 * print_all_letters_starting_from - Prints alphabets starting from a-z
 *@c: A character type variable
 *
 */

void print_all_letters_starting_from(char c)
{
	if (c > 'z')
	{
		return;
	}
	print_char(c);
	print_all_letters_starting_from(c + 1);
}

/*
 * print_alphabet - Display results on standard output
 *
 */
void print_alphabet(void)
{
	print_all_letters_starting_from('a');
}

/*
 * main - Function that allow program execution
 *
 * Return: returns 0 if success else 1 if fails
 */
int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
