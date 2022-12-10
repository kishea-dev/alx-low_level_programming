#include <stdio.h>
/**
  *main - main block
 *Description: prints lowercase except q and e then  new line
 *Return: 0
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a != 'q' && a != 'e')
{
putchar(a);
a += 1;
}
}
putchar('\n');
return (0);
}
