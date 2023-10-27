#include <unistd.h>

/**
 * _putchar - Write a character to the standard output (stdout).
 * @c: The character to be printed to stdout.
 * Return: On success, 1. On error, -1 with errno set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
