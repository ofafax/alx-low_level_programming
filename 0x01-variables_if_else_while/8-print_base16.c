#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * followed by a line
 * return: always 0 (success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
