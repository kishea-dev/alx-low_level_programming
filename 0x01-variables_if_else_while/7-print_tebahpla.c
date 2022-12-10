#include <stdio.h>
/**
  *main - main block
*Description: prints alphabet in reverse followed by a new line
*Return: 0
*/
int main(void)
{
char k = 'z';
while (k <= 'a')
{
putchar(k);
k--;
}
putchar('\n');
return (0);
}


