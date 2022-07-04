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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	if( n > 5)
{
	printf("Last digit of %d is 8 and is greater than 5");
}
	if( n == 0)
{
	printf("0");
}
	if( n < 0 && n!=0)
{
	printf("Last digit of -98 is -8 and is less than 6 and not 0");
}
	printf("\n");

	return (0);
}
