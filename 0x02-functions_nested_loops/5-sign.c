#include "main.h"

/**
 * print_sign - print sign accordingly
 * @n: character argument passed
 * Return: 1 0 -1 depending
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('=');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
}