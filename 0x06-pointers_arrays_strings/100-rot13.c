#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int string = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + string) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + string) == alphabet[i])
			{
				*(s + string) = rot13[i];
				break;
			}
		}
		string++;
	}
	return (s);
}
