#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, new line.
 * Do not print 2 and 4
 * Return: no return.
 */

void print_most_numbers(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		if (b != '2' && b != '4')
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
