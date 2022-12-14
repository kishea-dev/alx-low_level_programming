#include <stdio.h>
/**
  * main - first 50 fibonacci numbers.
  * Return: 0.
  */
int main(void)
{
	unsigned long counter1, counter2, counter3, counter4;

	counter2 = 0;
	counter3 = 1;
	for (counter1 = 0; counter1 < 50; counter1++)
	{
		counter4 = counter2 + counter3;
		counter2 = counter3;
		counter3 = counter4;
		printf("%lu", counter4);
		if (counter1 == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}

