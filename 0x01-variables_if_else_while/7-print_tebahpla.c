#include <stdio.h>

/**
 * main - Start Prog
 *
 * Return: Exit prog
 */

int main(void)
{
int i;

for (i = 0 ; i < 26 ; i++)
{
putchar('z' - i);
}

putchar('\n');

return (0);
}
