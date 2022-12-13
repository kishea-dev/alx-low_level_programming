#include "main.h"

/**
* main - prints _putchar
* Return: 0 - success
*/
int main(void)
{
	int str[] = {'_','p','u','t','c','h','a','r'};
	int i;

	for (i = 0; i < sizeof(str); i++)
	{
		_putchar(i);
	}
	return (0);
}
