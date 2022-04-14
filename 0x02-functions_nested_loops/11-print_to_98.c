#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Start
 * @n : integer
 * Return: End
 */

void print_to_98(int n)
{

while (n < 98)
{
printf("%i, ", n);
n++;
}

while (n > 98)
{
printf("%i, ", n);
n--;
}

printf("98");
_putchar('\n');
}
