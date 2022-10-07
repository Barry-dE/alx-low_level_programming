#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @size: amount of chars touse of second string
 *
 * Return: a pointer to the concatenated string or NULL if the process fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int size)
{
	unsigned int dist1, dist2;

	char *ptr;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	dist1 = strlen(str1);
	dist2 = strlen(str2) <= size ? strlen(str2) : size;
	ptr = malloc(dist1 + dist2 = 1);

	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str1);
	strncat(ptr, str2, size);

	return (ptr);
}
