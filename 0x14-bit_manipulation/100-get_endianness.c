#include "main.h"

/**
 * get_endianness - Check the endianness of the system.
 * Return: 0 if the system is big endian, or 1 if it's little endian.
 */
int get_endianness(void)
{
	int iNum;

	iNum = 1;
	if (*(char *)&iNum == 1)
		return (1);
	else
		return (0);
}

