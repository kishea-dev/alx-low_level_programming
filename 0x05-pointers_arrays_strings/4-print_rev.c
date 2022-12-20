#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * @str: store the string.
 */
void print_rev(char *str)
{
	int i;

	i = str_len(str) - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

/**
  * str_len - finds the length of a string.
  * Return: len.
  * @pointer: pointer.
  */
int str_len(char *pointer)
{
	int c = 0;

	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
