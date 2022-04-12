#include <stdio.h>

/**
 * main - Start prog
 *
 * Return: End
 */

int main(void)
{
int i, j, k;
int First = -1;

for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
if (i == j || i == k || j == k)
	continue;
if (i < j && i < k && j < k)
{
if (First > 0)
{
putchar(',');
putchar(' ');
}

First = 1;
putchar(i);
putchar(j);
putchar(k);
}
}
}
}

putchar('\n');

return (0);
}
