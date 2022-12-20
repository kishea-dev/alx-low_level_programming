#include "main.h"
/**
 * puts_half - print half of a string.
 * @str: character
 */
void puts_half(char *str)
{
	int m, n, i, j;

	m = str_len(str) / 2;

	if (str_len(str) % 2 == 0)
	{
		for (i = m; i < str_len(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else if (str_len(str) % 2 != 0)
	{
		n = (str_len(str) - 1) / 2;
		for (j = n; j <= str_len(str); j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

/**
  * str_len - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int str_len(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
