#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *main- main block
 *Description: Get random number and print the number
 *if its positive , negative or zero
 *Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
}
