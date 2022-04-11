#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;

for (c = 0; c < 26 ; ++c)
{
if ('a' + c == 'e' || 'a' + c == 'q')
continue;

putchar('a' + c);
}

putchar('\n');

return (0);
}
