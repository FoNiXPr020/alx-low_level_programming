#include "main.h"

/**
* _strspn - Gets the length of a Prefix substring.
* @s: String where substring will look.
* @accept: Substring of Accepted chars.
* Return: Length of Occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}

