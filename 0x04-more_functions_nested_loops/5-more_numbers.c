#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14.
 *
 */
void more_numbers(void)
{
	int count1, count2;

	count1 = 0;
	while (count1 < 10)
	{
		count2 = 0;
		while (count2 < 15)
		{
			if (count2 > 9)
				_putchar(count2 / 10 + '0');

			_putchar(count2 % 10 + '0');
			count2++;
		}
		count1++;
		_putchar('\n');
	}
}
