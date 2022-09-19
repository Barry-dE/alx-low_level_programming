#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers,new line
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */

void print_array(int *a, int n)
{
	int z = 0;

	for (; z < n; z++)
	{
		printf("%d", *(a + z));
		if (z != (n - 1))

			printf(", ");
	}
	printf("\n");
}
