#include <stdio.h>

/**
 * main - Start prog
 *
 * Return: End
 */

int main(void)
{
int i, j, k;
bool First = true;

for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
if (i == j || i == k || j == k)
	continue;
if (!First)
{
putchar(',');
putchar(' ');
}

First = false;

if (i < j && i < k && j < k)
{
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
