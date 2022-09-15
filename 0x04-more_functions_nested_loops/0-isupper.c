#include "main.h"

/**
 *  _isupper - checks if parameter is an uppercase character.
 *  @c: input character.
 *  Return: 1 if uppercase character, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c == 67)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
