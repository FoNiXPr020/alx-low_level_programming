#include "main.h"

/**
 * _puts - Prints string
 * @str: Input string
 * Return: No return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

