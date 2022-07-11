#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int length, index;

	index = 0;
	while (s[index] != '\0')
		index++;
	for (length = index - 1; index >= 0; index--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
