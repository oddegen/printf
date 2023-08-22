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
 * print_integer - converts integer to its repective digits
 * @num: the integer
 * @count: pointer to the total char count
 *
 * Return: void
 */

void print_integer(int num, int *count)
{
	int divisor, digit;

	if (num < 0)
	{
		write(1, "-", 1);
		count_characters(count, 1);
		num = -num;
	}
	divisor = 1;
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = (num / divisor) % 10;
		print_digit(digit, count);
		divisor /= 10;
	}
}
