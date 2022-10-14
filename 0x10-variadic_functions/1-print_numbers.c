#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by newline.
 *
 * @separator: separates two numbers
 * @n: number of args passed in.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int num = va_arg(args, const unsigned int);

		printf("%d", num);
		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}

