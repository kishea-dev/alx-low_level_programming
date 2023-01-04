#include <unistd.h>

/**
 * _putchar - write a char
 * Return: the character to write to stdout.
 */

int _putchar(char cc)
{
	return(write(1, &cc, 1));
}
