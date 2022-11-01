#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char main(void)
{
	print_binary('0');
	putchar('\n');
	print_binary('1');
	putchar('\n');
	print_binary('98');
	putchar('\n');
	print_binary('1024');
	putchar('\n');
	print_binary((1 << 10) + 1);
	putchar('\n');
	return 0;
}
