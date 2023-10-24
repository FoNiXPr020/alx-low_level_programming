#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Safely prints a linked list
 * of type listint_t and returns the number of nodes.
 * @head: Pointer to the list to print.
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t iNum = 0;
	long int Current;

	while (head)
	{
		Current = head - head->next;
		iNum++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (Current > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (iNum);
}
