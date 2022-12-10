#include <stdio.h>
/**
 *main - main block
 *Description: prints alphabet in lowercase + uppercase + new line
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
c = 'A';

while (c <= 'Z')
{
putchar(c);
c += 1;
}
putchar('\n');
return (0);
}
