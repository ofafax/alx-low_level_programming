#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: no of bits to be flipped in n to give m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp, x;

	temp = 0;

	x = 0;

	temp = n ^ m;

	while (temp > 0)
	{
		x += (temp & 1);

		temp >>= 1;
	}
	return (x);
}
