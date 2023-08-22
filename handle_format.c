#include "main.h"

/**
 * handle_format - handels specified format
 * @args: list of arguments
 * @format: format specifier
 * @count: pointer to number of characters
 * Return: Will return the amount of characters printed.
 */

void handle_format(va_list args, char format, int *count)
{
	switch (format)
	{
		case 'c':
			char c = (char)va_arg(args, int);

			write(1, &c, 1);
			count_characters(count, 1);
			break;
		case 's':
			const char *str = va_arg(args, const char *);
			int num_chars = 0;

			while (*str)
			{
				write(1, str, 1);
				str++;
				num_chars++;
			}
			count_characters(count, num_chars);
			break;
		case '%':
			char percent = '%';

			write(1, &percent, 1);
			count_characters(count, 1);
			break;
	}
}
