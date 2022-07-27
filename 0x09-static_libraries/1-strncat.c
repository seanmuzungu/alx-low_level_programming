#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string
 * @src: The string
 * @n: The number of bytes from src to be appended to dest
 * Return: A pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
