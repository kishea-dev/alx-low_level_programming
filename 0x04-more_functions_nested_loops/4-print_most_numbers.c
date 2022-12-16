#include "main.h"

/**
 * print_most_numbers - print 0 to 9 without 2 and 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		if (counter == 2 || counter == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + counter);
		}
	}
	_putchar('\n');
}

