#include "main.h"

/**
 * print_string - Prints a string
 * @str: string that is going to be printed
 * @count: pointer to the total count of char
 *
 * Return: void
 */

void print_string(const char *str, int *count)
{
	int num_chars = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		count_characters(count, 6);
	}
	else
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
			num_chars++;
		}
		count_characters(count, num_chars);
	}
}
