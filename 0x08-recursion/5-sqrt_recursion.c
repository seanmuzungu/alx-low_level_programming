#include "main.h"

/**
 *_sqrt_recursion- returns the natural square root of a number
 *@n: the number to return the square root oif
 *Return: square root if it has natural square root if not return -1
 */
int _sqrt_recursion(int n)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt_recursion, i + 1);
}
