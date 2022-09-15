#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *  @n: times diagonal line is printed.
 *  Return: no return.
 */

void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
	_putchar('\n');
}
