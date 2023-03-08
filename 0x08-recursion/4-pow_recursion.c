#include "main.h"

/**
 * _pow_recursion - return the length of a string
 * @x: Input
 * @y: power
 * Return: value of stringlength
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
