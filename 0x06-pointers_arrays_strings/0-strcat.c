#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
i{
	int index;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] != '\0'; index++){
		dest[dest_len++] = src[index];
	dest_len +=1;
	}
	return (dest);
}
