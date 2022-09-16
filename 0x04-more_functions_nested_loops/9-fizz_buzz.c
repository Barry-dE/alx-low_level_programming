#include <stdio.h>
#include "main.h"

 /**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three print fizz
 * multiples of both 3 and 5 should print FizzBuzz.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
