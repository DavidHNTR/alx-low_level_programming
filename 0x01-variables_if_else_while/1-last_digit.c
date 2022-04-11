#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Start program
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d %s", n, n % 10, "and is 0\n");
	}
	else if (n % 10 > 5)
	{
		printf("The last digit of %d is %d %s", n, n % 10, "and is greater than 5\n");

	}
	else
		printf("The last digit of %d is %d %s", n, n % 10, "and is less than 6 and not 0\n");

	return (0);

}
