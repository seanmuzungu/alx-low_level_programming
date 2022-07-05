#include <unistd.h>
#include <main.h>

/**
 *  * * main - Entry point
 *  Description: 'the program's description'
 *  Return: Always 0 (Success):
 */ 

int _putchar(char c) 
{
	return (write(1, &c, 1));
}
