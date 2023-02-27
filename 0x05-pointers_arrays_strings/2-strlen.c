#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string
 * Return: Length
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
