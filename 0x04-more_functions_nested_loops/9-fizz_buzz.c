#include <stdio.h>


 /**
 * main - prints Buzz each numbers of 3 and 5.
 *
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
