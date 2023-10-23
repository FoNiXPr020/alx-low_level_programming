#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a singly linked list.
 * @header: A pointer to the first node of the list.
 *
 * Description: This function frees the memory occupied
 * by each node in the
 * linked list, starting from the @header.
 */
void free_listint(listint_t *header)
{
	listint_t *iTemp, *iTemp2;

	iTemp = header;

	while (iTemp != NULL)
	{
		iTemp2 = iTemp->next;
		free(iTemp);
		iTemp = iTemp2;
	}
}
