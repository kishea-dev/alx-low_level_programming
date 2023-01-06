#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name, followed by new.
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: integer.
  */
int main(int argc, char *argv[])
{
	int counter, mul = 1;

	if (argc > 1 && (argc - 1) == 2)
	{
		for (counter = 1; counter < argc; counter++)
		{
			mul *= atoi(argv[counter]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
