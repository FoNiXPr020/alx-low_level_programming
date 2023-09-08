#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0 (Success)
*/
int main(void)
{
	char a = 'a';
	char c = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	{
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
