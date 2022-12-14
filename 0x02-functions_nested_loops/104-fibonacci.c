#include <stdio.h>
/**
  * main - finds and prints the first 98 Fibonacci numbers.
  * Return: 0.
  */
int main(void)
{
	int count;
	unsigned long counter1, counter2, counter3;
	unsigned long counter5, counter6, counter7, to_carriage;

	count = 0;
	counter1 = 0;
	counter2 = 1;
	for (count = 1; count <= 91; count++)
	{
		counter3 = counter1 + counter2;
		counter1 = counter2;
		counter2 = counter3;
		printf("%lu, ", counter3);
	}
	counter5 = counter1 % 1000;
	counter1 = counter1 / 1000;
	counter6 = counter2 % 1000;
	counter2 = counter2 / 1000;
	while (count <= 98)
	{
		to_carriage = (counter5 + counter6) / 1000;
		counter7 = (counter5 + counter6) - to_carriage * 1000;
		counter3 = (counter1 + counter2) + to_carriage;
		counter5 = counter6;
		counter6 = counter7;
		counter1 = counter2;
		counter2 = counter3;
		if (counter7 >= 100)
			printf("%lu%lu", counter3, counter7);
		else
			printf("%lu0%lu", counter3, counter7);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}

