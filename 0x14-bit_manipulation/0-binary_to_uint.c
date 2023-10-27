#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a number represented as a string
 * to an unsigned int.
 * @b: The character string containing the binary number to be converted.
 * Return: The converted decimal number if the conversion is successful, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int iTotal, iPower;
	int iLen;

	if (b == NULL)
		return (0);

	for (iLen = 0; b[iLen]; iLen++)
	{
		if (b[iLen] != '0' && b[iLen] != '1')
			return (0);
	}
	for (iPower = 1, iTotal = 0, iLen--; iLen >= 0; iLen--, iPower *= 2)
	{
		if (b[iLen] == '1')
			iTotal += iPower;
	}

	return (iTotal);
}
