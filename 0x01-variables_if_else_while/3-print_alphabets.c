#include <stdio.h>

/**
 * main - Program start
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
int a1, a2;

for (a1=0; a1 < 26; ++a1)
putchar('a' + a1);

for (a2=0; a2 < 26; ++a2)
putchar('A' + a2);

putchar('\n');

return (0);
}
