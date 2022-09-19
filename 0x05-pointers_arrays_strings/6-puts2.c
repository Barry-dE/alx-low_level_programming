#include "main.h"

/**
 * puts2 - prints every other character of a string
 * followed by a new line
 * @str: input string.
 * Return: no return.
 */

void puts2(char *str)
{
	int ptr = 0;

	while (ptr >= 0)
	{
		if (str[ptr] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (ptr % 2 == 0)
			_putchar(str[ptr]);
		ptr++
	}
}
