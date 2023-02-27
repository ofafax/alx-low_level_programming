#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: Integer to swap
 * @b: Integer to swap
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
