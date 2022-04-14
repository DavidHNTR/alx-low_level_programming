#include "main.h"

/**
 * print_last_digit - Start
 * @x : integer
 * Return: End
 */

int print_last_digit(int x)
{
int i = x % 10;

if (i < 0)
{
i *= -1;
}

_putchar(i + '0');
return (i);
}
