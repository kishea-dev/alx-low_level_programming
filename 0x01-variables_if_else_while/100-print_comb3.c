#include <stdlib.h>
/**
*main - prints all possible two digits.
*Return: (0)
*/
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

