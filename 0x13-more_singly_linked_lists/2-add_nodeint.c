#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to the address of the first node.
 * @n: An integer to insert into the new node.
 * Return: A pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *iTemp;

	iTemp = malloc(sizeof(listint_t));
	if (iTemp == NULL)
		return (NULL);

	iTemp->n = n;
	iTemp->next = *head;
	*head = iTemp;
	return (*head);
}

