#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * specified position in a linked list.
 * @head: Pointer to the first node.
 * @index: Position for the new node.
 * @n: Data for the new node.
 * Return: Pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *iNode, *iTemp;
	unsigned int i = 0;

	if (*head == NULL && index != 0)
		return (NULL);

	if (index != 0)
	{
		iTemp = *head;

		for (; i < index - 1 && iTemp != NULL; i++)
			iTemp = iTemp->next;

		if (iTemp == NULL)
			return (NULL);
	}

	iNode = malloc(sizeof(listint_t));

	if (iNode == NULL)
		return (NULL);

	iNode->n = n;

	if (index == 0)
	{
		iNode->next = *head;
		*head = iNode;
		return (iNode);
	}

	iNode->next = iTemp->next;
	iTemp->next = iNode;

	return (iNode);
}
