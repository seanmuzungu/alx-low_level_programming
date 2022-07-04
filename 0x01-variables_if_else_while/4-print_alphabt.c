#include <stdio.h>

/**
 * * * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
	if (a == 'q' || a == 'e')
{
	continue;
}
	putchar(a);
	return (0);
}
}
