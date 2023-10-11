#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name's main
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

