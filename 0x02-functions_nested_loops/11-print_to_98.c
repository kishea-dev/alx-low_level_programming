#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers from num to 98.
 * @num: the number to start counting from
 * Return: void.
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		for (num = num; num < 98; num++)
			printf("%d, ", num);
		printf("%d\n", 98);
	}
	else
	{
		for (num = num; num > 98; num--)
			printf("%d, ", num);
		printf("%d\n", 98);
	}
}
