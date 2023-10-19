#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @header: A pointer to the list_t list to print
 *
 * This function traverses the linked list and prints the data
 * of each node, followed by a newline character. It returns the
 * number of nodes printed.
 *
 * Return: The number of nodes printed.
 */

size_t print_list(const list_t *header)
{
	size_t iNum = 0;

	while (header)
	{
		if (!header->iString)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", header->iLen, header->iString);
		header = header->iNext;
		iNum++;
	}

	return (iNum);
}

