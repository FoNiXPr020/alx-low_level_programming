#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list
 * and returns the starting node's address, or NULL.
 * @head: Linked list to search for a loop.
 * Return: Address of the loop's starting node, 
 * or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *iFast = head;
	listint_t *iSlow = head;

	if (!head)
		return (NULL);

	while (iSlow && iFast && iFast->next)
	{
		iFast = iFast->next->next;
		iSlow = iSlow->next;
		if (iFast == iSlow)
		{
			iSlow = head;
			while (iSlow != iFast)
			{
				iSlow = iSlow->next;
				iFast = iFast->next;
			}
			return (iFast);
		}
	}

	return (NULL);
}

