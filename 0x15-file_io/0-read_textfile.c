#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX std output
 * @filename: name of the file
 * @letters: no of letters to be read and printed
 *
 * Return: no of letters read and printed, 0 if failed
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int x, longz, i, temp;

	char *rndm;

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	rndm = malloc(sizeof(char) * letters);

	if (!rndm)
		return (0);

	read(x, rndm, letters);

	rndm[letters] = '\0';

	for (i = 0; rndm[i] != '\0'; i += 1)
		longz += 1;

	temp = close(x);

	if (temp != 0)
		exit(-1);

	temp = write(STDOUT_FILENO, rndm, longz);

	if (temp != longz)
		return (0);

	free(rndm);

	return (longz);
}

