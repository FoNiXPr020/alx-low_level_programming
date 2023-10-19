#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Singly Linked List Node
 * @str: Dynamic string (malloc'ed)
 * @len: Length of the string
 * @next: Pointer to the next node
 *
 * Description: Defines a node for a singly linked list.
 */
typedef struct list_s
{
	char *iString;
	unsigned int iLen;
	struct list_s *iNext;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *header);

/* END OF LISTS_H */
#endif


