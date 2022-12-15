#include "main.h"

/**
 * largest_number - largest of 3 numbers
 * @first: first
 * @second: second
 * @third: third
 * Return: largest
 */

int largest_number(int first, int second, int third)
{
	int largest;

	if (first > second && first > third)
	{
		largest = first;
	}
	else if (second > first && second > third)
	{
		largest = second;
	}
	else
	{
		largest = third;
	}
	return (largest);
}
