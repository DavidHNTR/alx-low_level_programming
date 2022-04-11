#include <stdio.h>

/**
 * main - prog Start
 *
 * Return: prog End
 */

int main(void)
{
int i;
int a;

for (i = '0' ; i <= '10' ; i++)
{
putchar(i);
}

for (a = 'a' ; a <= 'f' ; ++a)
{
putchar(a);
}

putchar('\n');

return (0);
}
