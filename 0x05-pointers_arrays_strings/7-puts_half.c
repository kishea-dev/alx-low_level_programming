#include "main.h"
/**
 * puts_half - print half of a string.
 * @str: character
 */
void puts_half(char *str)
{
	int m, n, i, j;

	m = string_length(str) / 2;

	if (string_length(str) % 2 == 0)
	{
		for (i = m; i < string_length(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (string_length(str) - 1) / 2;
		for (j = (n + 1); j <= string_length(str); j++)
		{
			_putchar(str[j]);
		}
	}
}

/**
  * string_length - finds the length of a string.
  * Return: length of c.
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
