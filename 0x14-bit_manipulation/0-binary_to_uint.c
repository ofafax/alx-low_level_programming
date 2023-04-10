#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that converts a binary number to
 * an unsigned integer
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: converted number or 0 if there is one or
 * more char in the string b that is not 0 or 1, or
 * if b in NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			num = (num << 1) | 1;

		else if (*b == '0')
			num = num << 1;

		else
			return (0);

		b++;
	}

	return (num);
}
