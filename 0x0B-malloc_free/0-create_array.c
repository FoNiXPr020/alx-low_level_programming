#include "main.h"

/**
*create_array - Array for prints a string
*@size: Number elements array
*@c: Char
*Return: Pointer
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}

array = (char *)malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL); /* Memory allocation failed */
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
