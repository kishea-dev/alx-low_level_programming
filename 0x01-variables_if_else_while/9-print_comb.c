#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: prints combinations of 2 single
*digit numbers followed by a new line
*Return: (0)
*/
int main(void)
{
int f = '0';

while (f <= '9')
{
putchar(f);
if (f != '9')
{
putchar(',');
putchar(' ');
}
f += 1;
}
putchar('\n');
return (0);
}
