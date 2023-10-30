#include "main.h"

/**
 * append_text_to_file - Append text to an existing file.
 * @filename: The file to which text will be appended.
 * @text_content: The text content to append to the file.
 * Return: Returns 1. On failure or error, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int integer;
	int iLen = 0;

	if (!filename)
		return (-1);
	integer = open(filename, O_RDWR | O_APPEND);
	if (integer == -1)
		return (-1);
	while (text_content && text_content[iLen])
		iLen++;
	write(integer, text_content, iLen);
	close(integer);
	return (1);
}
