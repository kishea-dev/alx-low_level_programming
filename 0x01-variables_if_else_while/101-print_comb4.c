#include <stdio.h>
#include <stdlib.h>
/**
*main - prints all possible 3 digits.
*Return: (0)
*/
int main(void)
{
	char i;
	char j;
	char k;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i; j < '9'; j++)
		{
			if (i != j)
			{
				for (k = j; k <= '9'; k++)
				{
					if (j != k || i != k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
if (j != '8' || k != '9')
{
putchar(',');
putchar(' ');
}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

