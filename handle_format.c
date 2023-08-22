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
	char c;
	const char *str;
	int num;
	char percent;

	switch (format)
	{
		case 'c':
			c = (char)va_arg(args, int);
			write(1, &c, 1);
			count_characters(count, 1);
			break;
		case 's':
			str = va_arg(args, const char *);
			print_string(str, count);
			break;
		case '%':
			percent = '%';
			write(1, &percent, 1);
			count_characters(count, 1);
			break;
		case 'd':
		case 'i':
			num = va_arg(args, int);
			print_integer(num, count);
			break;
		default:
			percent = '%';
			write(1, &percent, 1);
			write(1, &format, 1);
			count_characters(count, 2);
			break;
	}
}
