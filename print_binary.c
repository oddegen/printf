#include "main.h"

/**
 * print_binary - Converts a number from base 10 to binary
 * @num: the number to be converted to base 2
 * @count: pointer to the total number of chars
 *
 * Return: The length of the number printed
 */

void print_binary(unsigned int num, int *count)
{
	char buffer[64];
	int i;

	if (num == 0)
	{
		write(1, "0", 1);
		count_characters(count, 1);
	}

	for (i = 0; num > 0; ++i)
	{
		buffer[i] = (num % 2) + '0';
		num /= 2;
	}

	for (i -= 1; i >= 0; --i)
	{
		write(1, &buffer[i], 1);
		count_characters(count, 1);
	}

}
