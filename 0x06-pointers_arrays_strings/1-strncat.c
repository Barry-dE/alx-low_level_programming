#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int string = 0, string2 = 0;

	while (*(dest + string) != '\0')
	{
		string++;
	}

	while (string2 < n)
	{
		*(dest + string) = *(src + string2);
		if (*(src + string2) == '\0')
			break;
		string++;
		string2++;
	}
	return (dest);
}
