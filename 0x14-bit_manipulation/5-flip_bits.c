#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Calculate the number of bits to convert one num to another.
 * @n: The first number.
 * @m: The second number to which 'n' needs to be converted.
 * Return: The number of bits that need to be flipped to convert 'n' to 'm.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int iDiff;
	int iCount;

	iDiff = n ^ m;
	iCount = 0;

	while (iDiff)
	{
		iCount++;
		iDiff &= (iDiff - 1);
	}

	return (iCount);
}

