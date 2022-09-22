include "main.h"

/**
 * *string_toupper - Lowercase string to uppercase.
 * @w: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *w)
{
	int string = 0;

	while (*(w + string) != '\0')
	{
		if ((*(w + string) >= 97) && (*(w + string) <= 122))
			*(w + string) = *(w + string) - 32;
		string++
	}
	return (w);
}
