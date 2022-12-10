#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  *main - main block
*Description: prints number to base10 starting with 0 followed by a newline
*Return: 0
*/
int main(void)
{
char k = 0;

while (k < 10)
{
printf("%i", k);
k += 1;
}
putchar('\n');
return (0);
}
