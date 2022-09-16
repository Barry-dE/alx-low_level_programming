#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int f, pf;

	n = 612852475143;
	for (pf = 2; pf <= f; pf++)
	{
		if (f % fp == 0)
		{
			f /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
