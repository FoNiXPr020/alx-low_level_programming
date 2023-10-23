#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums the 'n' data values in a linked list.
 * @header: Pointer to the first node of the list.
 * Return: The integer sum of 'n' values.
 */
int sum_listint(listint_t *header)
{
	int Stock = 0;

	while (header != NULL)
	{
		Stock += header->n;
		header = header->next;
	}
	return (Stock);
}

