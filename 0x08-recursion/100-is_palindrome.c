#include "main.h"

/**
 *is_palindrome - Checks if a string is a palindrome.
 *@s: The string to be checked.
 *
 *Return: If the string is a palindrome - 1.if not 0
 *
 */
int is_palindrome(char *s)
{
	int i = 0;

	int len = find_strlen(s);

	if (!(*s))
	{
		return (1);
	}

	return (check_palindrome(s, len, i));
}
