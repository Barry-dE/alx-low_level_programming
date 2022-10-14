#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - printfs a char from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */

void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - printfs an int from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */

void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - printfs a float from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
i
at(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - printfs a string from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */

void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ar;
	int i = 0;
	char form;
	char *str;

	va_start(ar, format);
	while (format != NULL && format[i])
	{
		form = format[i];
		switch (form)
		{
			case 'c':
				printf("%c", va_arg(ar, int));
				break;
			case 'i':
				printf("%d", va_arg(ar, int));
				break;
			case 'f':
				printf("%f", va_arg(ar, double));
				break;
			case 's':
				str = va_arg(ar, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;

		}
		if ((form == 'c' || form == 'i' || form == 'f' || form == 's')
				&& format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ar);
}
