#include <stdio.h>
/**
  * main - print the sum of all
  * the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int counter, result;

	for (counter = 0; counter < 1024; counter++)
		if (counter % 3 == 0 || counter % 5 == 0)
			result += counter;
	printf("%d\n", result);
	return (0);
}

