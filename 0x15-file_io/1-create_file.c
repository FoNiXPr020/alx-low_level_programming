#include "main.h"

/**
 * create_file - Create a new file with the given text content.
 * @filename: The name of the file to be created.
 * @text_content: The text content to write to the file.
 * Return: Returns 1. On failure or error, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int integer;
	int iLen = 0;

	if (!filename)
		return (-1);
	integer = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (integer == -1)
		return (-1);
	while (text_content && text_content[iLen])
		iLen++;
	write(integer, text_content, iLen);
	close(integer);
	return (1);
}
