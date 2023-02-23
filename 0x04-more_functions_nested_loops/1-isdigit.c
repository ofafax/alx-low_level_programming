#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through to 9
 *@c - integer to be checked
 * Return: 1 is c is true otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
