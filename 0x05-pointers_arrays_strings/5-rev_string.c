#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int string = 0, r, p;

	char *str, rev;

	while (string >= 0)
	{
		if (s[string] == '\0')
			break;
		string++;
	}
	str = s;

	for (r = 0; r < (string - 1); r++)
	{
		for (p = r + 1; p > 0; p--)
		{
			rev = *(str + p);
			*(str + p) = *(str + (p - 1));
			*(str + (p - 1)) = rev;
		}
	}
}
