#include <"main.h">

/**
 * print_alphabet - a function that prints the alphabet, in lowercase.
 *
 * Return: Always (0);
 */

 void alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
