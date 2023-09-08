#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (Success)
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
