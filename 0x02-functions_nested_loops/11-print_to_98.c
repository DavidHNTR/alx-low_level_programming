#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Start
 * @n : integer
 * Return: End
 */

void print_to_98(int n)
{
if (n <= 98)
{
	for (; n <= 98; n++)
	{
	if(n > 98)
	break;

	printf("%i", n);

	if (n != 98)
	printf(", ");
	}
}

if (n > 98)
{
	for (; n >= 98 ; n--)
	{
	if (n < 98)
	break;
	
	printf("%i", n);

	if (n != 98)
	printf(", ");
	}
}

_putchar('\n');
}
