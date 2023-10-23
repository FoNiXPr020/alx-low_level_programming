#include "lists.h"

/**
 * reverse_listint - Reverses a linked list and returns
 * the pointer to the new first node.
 * @head: Pointer to the first node in the list to be reversed.
 * Return: Pointer to the first node in the new list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *iPrev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = iPrev;
		iPrev = *head;
		*head = next;
	}

	*head = iPrev;

	return (*head);
}
