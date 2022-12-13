#include "main.h"

/**
 * times_table - PRINT 9 MULTIPLES FROM 0 to 9.
 */
void times_table(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int result = num1 * num2;

			if (result <= 10 && result > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (result / 10));
			}
			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
}
