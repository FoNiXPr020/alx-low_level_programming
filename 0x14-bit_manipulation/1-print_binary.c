#include "main.h"
#include <stdio.h>

/**
 * print_binary - Print the binary representation of a decimal number.
 * This function takes a decimal number 'n' as input and prints its binary
 * representation to the standard output.
 * @n: The decimal number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int iTemp;
	int iShift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (iTemp = n, iShift = 0; (iTemp >>= 1) > 0; iShift++)
		;

	for (; iShift >= 0; iShift--)
	{
		if ((n >> iShift) & 1)
			printf("1");
		else
			printf("0");
	}
}

