#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 * Return: length.
 */
int _strlen(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
