#include "main.h"

/**
 * times_table - function that prints times table.
 *
 * description: prints the 9 times table, starting with 0.
 *
 * Return: no return
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			result = a * b;
			_putchar(44);
			_putchar(32);

			if (result <= 9)
			{
				_putchar(32);
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
