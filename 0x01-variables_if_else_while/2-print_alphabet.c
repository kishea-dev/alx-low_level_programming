#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - main block
*Description: A programme that prints alphabet
*Return: 0
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c += 1;
}
putchar('\n');
return (0);
}
