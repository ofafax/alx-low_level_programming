#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The character to print
 *
 * Return: On success output 1.
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
