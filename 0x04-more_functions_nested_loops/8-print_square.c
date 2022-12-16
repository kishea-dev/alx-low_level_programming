#include "main.h"

/**
 * print_square - prints a square.
 *
 * @size: size of square
 */
void print_square(int size)
{
	int count1, count2;

	for (count1 = 1; count1 <= size; count1++)
	{
		for (count2 = 1; count2 <= size; count2++)
		{
			_putchar('#');
		}
		if (count1 == size)
		{
			break;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
