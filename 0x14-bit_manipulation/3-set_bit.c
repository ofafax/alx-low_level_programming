#include "main.h"

/**
 * set_bit - Function that sets the value of bit to 1 at a given
 * index
 * @n: pointer to the bit
 * @index: Index starting from 0 to the bit set
 *
 * Return: 1 if successful, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	x = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	x <<= index;

	*n = *n | x;

		return (1);
}

