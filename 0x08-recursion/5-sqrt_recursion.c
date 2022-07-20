#include "main.h"

/**
 *_sqrt_recursion- returns the natural square root of a number
 *@n: the number to return the square root of
 *
 *Return: square root if it has natural square root if not return -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
