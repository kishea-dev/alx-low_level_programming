#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: print all numbers base 16 in a new line
*Return: 0
*/
int main(void)
{
char d = '0';

while (d <= '9')
{
putchar(d);
d += 1;
}

d = 'a';
while (d <= 'f')
{
putchar(d);
d += 1;
}
putchar('\n');
return (0);
}
