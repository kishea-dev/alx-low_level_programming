#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - main block
*Description: print all single digit numbers to base 
*Return: 0
*/
int main(void)
{
int c = '0';
while (c <= '9')
{
putchar(c);
c += 1;
}
putchar('\n');
return (0);
}
