#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: input string
 * Return: no return
 */

void puts_half(char *str)
{
	int string = 0, a;

	while (string >= 0)
	{
		if (str[string] == '\0')
			break;
		string++;
	}
	if (string % 2 == 1)
		a = string / 2;
	else
		a = (string - 1) / 2;

	for (a++; a < string; a++)
		_putchar(str[a]);
	_putchar('\n');
}
