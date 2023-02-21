#include "main.h"

/**
 * print_alphabet - print all lowercase letters of the alphabet
 * followed by a new line
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);

		_putchar('\n');
	}
}
