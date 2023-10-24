#include "lists.h"

/**
 * print_listint_safe - Safely prints a linked list
 * of type listint_t and returns the number of nodes.
 * @head: Pointer to the list to print.
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *current = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= current->next)
		{
			i++;
			current = current->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
	}

	return (i);
}
