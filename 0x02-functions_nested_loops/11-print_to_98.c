#include "main.h"

/**
 * print_to_98 - Prints numbers to 98 followed by newline
 * @n: parameter 
 * Retutn: returns 
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

