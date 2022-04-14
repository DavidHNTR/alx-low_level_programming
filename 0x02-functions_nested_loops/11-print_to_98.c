#include "main.h"

/**
 * print_to_98 - Start
 *
 * Return: End
 */

void print_to_98(int n)
{
if (n <= 98)
{
	for (; n <= 98; n++)
	{
	printf(n);

	if (n != 98)
	printf(", ");
	}
}

if (n > 98)
{
	for (; n >= 98 ; n--)
	{
	printf(n);

	if (n!= 98)
	printf(", ");
	}
}
}
