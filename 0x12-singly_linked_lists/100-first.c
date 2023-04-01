#include <stdio.h>

/**
 * bmain - function that is executed before main
 * Return: no return because of void
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
