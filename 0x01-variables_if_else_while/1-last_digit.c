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
	if ( n > 5)
{
	printf("Greater than 5")
}
	if ( n == 0)
	printf("0");
}
	if( n < 0 && n!=0)
	printf("Less than 6 not 0");
}
	printf("\n");

	return (0);
}



