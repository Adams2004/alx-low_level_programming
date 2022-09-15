#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: any number
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastd = (n % 10);

	if (lastd < 0)
	{
		lastd = (-1 * lastd);
	}
	_putchar(lastd + '0');
	return (lastd);
}
