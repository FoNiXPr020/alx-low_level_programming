#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet(void)
{
	/* Print alphabet */
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}

