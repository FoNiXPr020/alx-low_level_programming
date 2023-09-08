#include <stdio.h>
/**
 * main - Write a program that prints all possible
 * different combinations of two digits
 * This program adheres to your constraints and prints.
 * of four digits in ascending order.
 * Return: 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
