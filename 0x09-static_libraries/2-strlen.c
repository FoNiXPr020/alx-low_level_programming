#include "main.h"

/**
 * _strlen - Length of a string
 * @s: Input char
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

