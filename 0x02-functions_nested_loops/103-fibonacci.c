#include <stdio.h>
/**
  * main - sum of even fibonacci's below 4,000,000.
  * Return: 0.
  */
int main(void)
{
	unsigned long counter1, counter2, counter3, counter4, sums;

	counter2 = sums = 0;
	counter3 = 1;
	for (counter1 = 0; counter1 < 50; counter1++)
	{
		counter4 = counter2 + counter3;
		counter2 = counter3;
		counter3 = counter4;
		if (counter4 % 2 == 0 && counter4 < 4000000)
		{
			sums += counter4;
		}
	}
	printf("%lu\n", sums);
	return (0);
}

