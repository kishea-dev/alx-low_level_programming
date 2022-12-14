#include "main.h"
/**
 * print_times_table - print multiplication table for num.
 * @num: The table.
 * Return: void.
 */
void print_times_table(int num)
{
	int counter1, counter2, res;

	if (!(num > 15 || num < 0))
	{
		for (counter1 = 0; counter1 <= num; counter1++)
		{
			for (counter2 = 0; counter2 <= num; counter2++)
			{
				res = (counter1 * counter2);
				if (counter2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && counter2 != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && counter2 != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

