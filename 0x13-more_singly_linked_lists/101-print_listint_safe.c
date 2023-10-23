#include "lists.h"

/**
 * print_listint_safe - Safely prints a linked list
 * of type listint_t and returns the number of nodes.
 * @head: Pointer to the list to print.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_p = head ,*fast_p = head;
	size_t ele = 0;
	int is_loop = 0;

	while (slow_p && fast_p && fast_p->next)
	{
		if (!(fast_p->next->next))
			break;
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			slow_p = slow_p->next;
			is_loop = 1;
			break;
		}
	}

	if (!is_loop)
	{
		while (head)
		{
			ele++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (ele);
	}

	while (head)
	{
		ele++;
		if (head == slow_p)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}

