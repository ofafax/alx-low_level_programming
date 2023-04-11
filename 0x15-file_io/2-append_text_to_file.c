#include "main.h"

/**
 * append_text_to_file - function that appends text to the end of a file
 * @filename: name of file
 * @text_content: content of text to be appended
 *
 * Return: 1 if successful, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;

	int temp;

	int rndm;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (!text_content)
		return (1);

	rndm = 0;

	while (text_content[rndm])
		rndm += 1;

	temp = write(x, text_content, rndm);

	if (temp == -1)
		return (-1);

	temp = close(x);

	return (1);
}
