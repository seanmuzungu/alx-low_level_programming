#include "main.h"

/**
 * _strcpy - Copies a string pointed
 * @dest: offer to copy the string to
 * @src: The source string to copy
 * Return: A pointer to the destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src; 
		dest++;
		src++;
	}
	*dest = '\0'
	return (start);
}
