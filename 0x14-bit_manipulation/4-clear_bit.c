#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at
 * a given index
 * @n: number to be set
 * @index: index starting from 0 of the bit to be set
 *
 * Return: 1 if successful, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	x = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	x <<= index;

	*n &= ~x;

		return (1);
}
