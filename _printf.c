#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					char c = (char)va_arg(args, char);

					write(1, &c, 1);
					count++;
					break;
				case 's':
					const char *s = va_arg(args, const char *);

					while (*s)
					{
						write(1, s, 1);
						s++;
						count++;
					}
					break;
				case '%':
					char percent = '%';

					write(1, &percent, 1);
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}

		format++;
	}

	va_end(args);
	return (count);
}
