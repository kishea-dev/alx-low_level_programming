#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @str: store character.
 * Return: Always 0.
 */
void rev_string(char *str)
{
	int length, c;
	char *begin, *end, temp;

	length = str_len(str);

	begin = str;
	end = str;

	for (c = 0; c < (length - 1); c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
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
