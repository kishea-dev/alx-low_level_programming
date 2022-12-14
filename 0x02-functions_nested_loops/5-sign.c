#include "main.h"
/**
 * print_sign - get signage of integer
 * @num: the number to be checked.
 * Return: -1 if negative, / if not a digit, 1 if positive, 0 if zero
 */
int print_sign(int num)
{
	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}

