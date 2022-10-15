#include "function_pointers.h"

/**
 * print_names - prints names
 *
 * @name: name to be printed
 * @f: pointer to the function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
