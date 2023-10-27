#include "main.h"
#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The number to evaluate.
 * @index: The index (starting from 0) of the bit to be retrieved.
 * Return: the value bit at the specified index or -1 in case of an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int iHolded;

	if (index > 64)
		return (-1);

	iHolded = n >> index;

	return (iHolded & 1);
}
