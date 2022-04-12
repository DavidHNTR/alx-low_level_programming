#include <stdio.h>

/**
 * main - Start here
 *
 * Return: End here
 */

int main(void)
{
int i;
int Num1, Num2;
for (i = '0' ; i <= '9' ; i++)
{
int j;
for (j = '1' ; j <= '9' ; j++)
{
Num1 = (i * 10) + j;
Num2 = (j * 10) + i;

if (Num1 == Num2 || Num2 < Num1)
continue;

if (i > '0' || j > '1')
{
putchar(',');
putchar(' ');
}

putchar(i);
putchar(j);

}

}

putchar('\n');

return (0);
}
