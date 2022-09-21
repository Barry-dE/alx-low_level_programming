#include "main.h"

/**
 *  _strcat - concatenates two strings
 *  @dest: means destination.
 *  @src: source.
 *  Return: Returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int string = 0, string2 = 0;

	while (*(dest + string) != '\0')
	{
		string++;
	}

	while (string2 >= 0)
	{
		*(dest + string) = *(src + string2);

		if (*(src + string2) == '\0')
			break;

		string++;
		string2++;
	}
	return (dest);
}
