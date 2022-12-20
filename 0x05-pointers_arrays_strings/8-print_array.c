#include "main.h"
#include <stdio.h>

/**
 * print_array - prints num elements of an array.
 * @arr: pointer to an integer
 * @num: number of elements of an array.
 */
void print_array(int *arr, int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		printf("%d", *(arr + i));
		if (i == (num - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
