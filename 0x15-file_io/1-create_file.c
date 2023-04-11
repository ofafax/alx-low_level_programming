#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: contents of the text to be created
 *
 * Return: 1 if successful, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int x;

	int rndm;

	int temp;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_content)
		return (1);

	rndm = 0;

	while (text_content[rndm] != '\0')
		rndm += 1;

	temp = write(x, text_content, rndm);

	if (temp != rndm)
		return (-1);

	temp = close(x);

	if (temp == -1)
		exit(-1);

	return (1);
}
