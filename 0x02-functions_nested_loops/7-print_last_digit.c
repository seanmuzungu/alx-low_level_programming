#includes "main.h"

/**
 * print_last_digit - prunts last digit
 * @n: parameter
 * Return: returns 1
 */

int print_last_digit(int n)
{
	int x;

	if (n > 0)
		n = -n;
	x = n % 10;
	_putchar (x + '0');
	return (n % 10);

}
