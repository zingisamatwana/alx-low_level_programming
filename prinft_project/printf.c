#include "main.h"

void print(char buffer[], int *buff_ind);

/**
 * printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print(buffer, &buff_ind);
			fmtspc = fmtspc(format, &i);
			size = size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				fmtspc,size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print - Prints contents
 * @buffer: Array of chars
 * @buff_ind: Index
 */
void print(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
