#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: prints all possible 
*different combinations of two digits.
*Return: (0)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i == 99)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
