#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 *
 * @num: number of times
 */
void print_diagonal(int num)
{
	int count1, count2;

	for (count1 = 1; count1 <= num; count1++)
	{
		for (count2 = 1; count2 <= count1; count2++)
		{
			if (count1 >= 2 && count2 <= count1 - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		if (count1 == num)
		{
			break;
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
