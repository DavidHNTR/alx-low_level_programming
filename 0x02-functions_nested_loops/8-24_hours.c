#include "main.h"

/**
 * jack_bauer - Start
 *
 * Return: End
 */

void jack_bauer(void)
{
int i, j, k, l;

for (i = '0'; i < '3'; i++)
{
	for (j = '0'; (i == '2' && j < '4') || (i < '2' && j <= '9'); j++)
	{
		for (k = '0'; k <= '5'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
			_putchar(i);
			_putchar(j);
			_putchar(':');
			_putchar(k);
			_putchar(l);
			_putchar('\n');
			}

		}
	}
}
}
