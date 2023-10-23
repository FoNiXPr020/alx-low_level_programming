#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Safely frees a linked list
 * and returns the number of elements freed.
 * @h: Pointer to the first node in the linked list.
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *iTemp;
	int gDiff;
	size_t iLen = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		gDiff = *h - (*h)->next;
		if (gDiff > 0)
		{
			iTemp = (*h)->next;
			*h = iTemp;
			iLen++;
		}
		else
		{
			*h = NULL;
			iLen++;
			break;
		}
	}

	*h = NULL;

	return (iLen);
}

