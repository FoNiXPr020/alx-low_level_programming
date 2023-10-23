#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a singly linked list.
 * @h: A pointer to the first node of the list.
 *
 * Description: This function frees the memory occupied
 * by each node in the
 * linked list, starting from the @h.
 */
void free_listint(listint_t *h)
{
	listint_t *iTemp, *iTemp2;

	iTemp = h;

	while (iTemp != NULL)
	{
		iTemp2 = iTemp->next;
		free(iTemp);
		iTemp = iTemp2;
	}
}
