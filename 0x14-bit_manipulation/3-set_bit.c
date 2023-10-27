#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: A pointer to the decimal number to be modified.
 * @index: The index position (starting from 0) to change.
 * Return: 1 if the operation was successful, or -1 in case of an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1UL << index);

	return (1);
}

