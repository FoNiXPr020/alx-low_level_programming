#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a singly linked list.
 * @header: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *header)
{
	const listint_t *iTemp;
	size_t iCount = 0;

	iTemp = header;
	while (iTemp)
	{
		printf("%d\n", iTemp->n);
		iCount++;
		iTemp = iTemp->next;
	}
	return (iCount);
}
