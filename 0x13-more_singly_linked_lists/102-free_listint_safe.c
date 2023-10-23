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
	size_t iLen = 0;
	int gDiff;
	listint_t *iTemp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		gDiff = *h - (*h)->next;
		if (gDiff > 0)
		{
			iTemp = (*h)->next;
			free(*h);
			*h = iTemp;
			iLen++;
		}
		else
		{
			free(*h);
			*h = NULL;
			iLen++;
			break;
		}
	}

	*h = NULL;

	return (iLen);
}
