#include "main.h"

/**
 *is_prime_number- check if a number is prime
 *@n: the number to be checked
 *Return: 1 if the input integer is a prime number,otherwise returns 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_divis(n, 2));
}
