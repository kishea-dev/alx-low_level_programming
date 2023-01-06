#include <stdio.h>

/**
  * main - prints its name, then new line
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: integer.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
