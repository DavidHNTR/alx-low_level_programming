#include "main.h"

/**
 * print_last_digit - Start
 * @x : integer
 * Return: End
 */

int print_last_digit(int x)
{
if (x >= 0)
{
_putchar(x % 10);
 return (x % 10);
}

_putchar((x * -1) % 10)
return ((x * -1) % 10);
}
