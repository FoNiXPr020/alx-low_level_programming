#include <stdio.h>

/**
 * array_iterator - Executes funct
 * @array: Array of elements
 * @size: Array's size
 * @action: pointer to function
 * Return: No
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

