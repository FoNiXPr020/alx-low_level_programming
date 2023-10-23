#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the first element of a singly linked list.
 * @head: A pointer to the list's head.
 * Return: The integer value of the removed element (if successful).
 */
int pop_listint(listint_t **head)
{
	int iData;
	listint_t *iTemp;

	if (*head == NULL)
		return (0);

	iTemp = *head;
	*head = iTemp->next;
	iData = iTemp->n;
	free(iTemp);
	return (iData);
}
