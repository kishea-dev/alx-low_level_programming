#include "main.h"

/**
* main - prints _putchar
* Return: 0 - success
*/
int main(void)
{
	int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
