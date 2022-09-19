#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 *  @dest: destination.
 *  @src: source.
 *  Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int cp = 0;

	while (count >= 0)
	{
		*(dest + cp) = *(src + cp);
		if (*(src + cp) == '\0')
			break;
		cp++;
	}
	return (cp);
}
