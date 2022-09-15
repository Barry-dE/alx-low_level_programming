#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, new line.
 * Do not print 2 and 4
 * Return: no return.
 */

void print_most_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		if (b != 50 && b != 52)
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
