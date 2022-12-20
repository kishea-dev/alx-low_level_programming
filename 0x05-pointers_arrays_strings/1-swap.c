#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @num1: first integer.
 * @num2: second integer.
 */
void swap_int(int *num1, int *num2)
{
	int temp = *num1;

	*num1 = *num2;
	*num2 = temp;
}
