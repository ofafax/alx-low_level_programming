#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string
 * Return: 0
 */

void print_rev(char *s)
{
	int n = 0;
	int p;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (p = n; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
