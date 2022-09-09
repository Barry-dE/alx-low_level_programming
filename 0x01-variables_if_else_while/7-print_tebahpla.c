#include <stdio.h>

/**
  * main - prints lowercased alphabets in reverse
  *
  * Return: Always (Success)
  */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
