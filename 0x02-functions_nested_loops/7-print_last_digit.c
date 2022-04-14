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
	 return (x % 10);
	}

	return -(x % 10);
}
