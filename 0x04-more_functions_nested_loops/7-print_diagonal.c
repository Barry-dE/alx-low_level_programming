#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *  @n: times diagonal line is printed.
 *  Return: no return.
 */

void print_diagonal(int n)
{
	int q, w;

	for (q = 0; q < n; q++)
	{
		for (w = 0; w < i; w++)
		{
			_putchar(' ');
		}
		_putchar(92);
	
		if (q < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
