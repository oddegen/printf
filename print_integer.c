#include "main.h"

/**
 * print_digit - prints a number sent to this function
 * @digit: the digit to print to std
 * @count: pointer of the total char count
 *
 * Return: void
 */

void print_digit(int digit, int *count)
{
	char digit_char = '0' + digit;

	write(1, &digit_char, 1);
	count_characters(count, 1);
}

/**
 * print_integer - prints the integers
 * @num: the integer
 * @count: pointer to the total char count
 *
 * Return: void
 */

void print_integer(unsigned int num, int *count)
{
	int digit;

	if ((int)num < 0)
	{
		write(1, "-", 1);
		count_characters(count, 1);
		num *= -1;
	}

	if (num / 10)
	{
		print_integer(num / 10, count);
	}
	digit = num % 10;
	print_digit(digit, count);
}
