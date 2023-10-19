#include <stdio.h>

void firstheader(void) __attribute__ ((constructor));

/**
 * firstheader - Displays an introductory message before the main function.
 *
 * Provides context or information before main's execution.
 */
void firstheader(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

