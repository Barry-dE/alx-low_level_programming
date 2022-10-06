#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 *  Return: ptr.
 *  if new_size == old_size, returns ptr without changes.
 *  if malloc fails, return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = ptr;
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (nptr);
	}
	if (new_size > old_size)
	{
		for (c = 0; c < old_size; c++)
		{
			nptr[c] = p[c];
		}
	}
	else
	{
		for (c = 0; c < new_size; c++)
		{
			nptr[c] = p[c];
		}
	}
	free(ptr);
	return (nptr);
}
