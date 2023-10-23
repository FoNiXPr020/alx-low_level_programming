#include "lists.h"

/**
 * print_listint - Prints elements of a singly linked list.
 * @header: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *header)
{
	size_t iCount = 0;

	while (header)
	{
		printf("%d\n", header->n);
		iCount++;
		header = header->next;
	}

	return (iCount);
}
