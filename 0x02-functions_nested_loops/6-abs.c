#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: parameter
 * Return: returns 0 always
 */

int _abs(int n)
{
	if (n > 0)
		n = -n;
	return (n);
}
