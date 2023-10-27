#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: A pointer to the decimal number to be modified.
 * @index: The index position (starting from 0) to change.
 * Return: 1 if the operation was successful, or -1 in case of an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;
	unsigned int iHolded;

	if (index > 64)
		return (-1);
	iHolded = index;
	for (j = 1; iHolded > 0; j *= 2, iHolded--)
		;

	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
