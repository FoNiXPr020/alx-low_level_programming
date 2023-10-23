#include "lists.h"

/**
 * listint_len - Counts the number of elements in a singly linked list.
 * @header: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *header)
{
	const listint_t *iTemp;
	unsigned int iCount = 0;

	iTemp = header;
	while (iTemp)
	{
		iCount++;
		iTemp = iTemp->next;
	}
	return (iCount);
}

