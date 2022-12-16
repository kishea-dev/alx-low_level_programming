#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14.
 *
 */
void more_numbers(void)
{
	int i, counter;

	i = 0;
	while (i <= 9)
	{
		counter = 0;
		while (counter <= 14)
		{
			if (counter <= 9)
			{
				_putchar('0' + counter);
			}
			else
			{
				_putchar('0' + counter / 10);
				_putchar('0' + counter % 10);
			}
			counter++;
		}
		_putchar('\n');
		i++;
	}
}
