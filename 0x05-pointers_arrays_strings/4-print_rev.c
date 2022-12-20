#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * @str: store the string.
 */
void print_rev(char *str)
{
	int i;

	i = string_length(str) - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

/**
  * string_length - finds the length of a string.
  * Return: len.
  * @pointer: pointer.
  */
int string_length(char *pointer)
{
	int c = 0;
	
	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
