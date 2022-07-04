#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastn = n % 10;
	if (lastn > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (n == 0)
{
	printf("Last digit of %d is %d 0\n", n, lastn);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n, n, lastn");
}

	return (0);
}
