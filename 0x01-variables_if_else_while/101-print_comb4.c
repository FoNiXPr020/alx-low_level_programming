#include <stdio.h>
/**
 * main - Write a program that prints all possible
 * different combinations of two digits.
 * This program adheres to your constraints and prints
 * possible different combinations of three digits in ascending
 * order.
 * Return: 0 (Success)
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
