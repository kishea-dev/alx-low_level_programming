#include "main.h"

/**
 * print_number - prints an interger.
 *
 * @num: number.
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
