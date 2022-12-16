#include "main.h"

/**
 * print_triangle - prints a triangle.
 *@size: prints a triangle.
 */
void print_triangle(int size)
{
	int count1, count2;

	for (count1 = 0; count1 < size; count1++)
	{
		for (count2 = 0; count2 < size; count2++)
		{
			if (count2 < size - count1 - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if ((count1 + 1) == size)
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
