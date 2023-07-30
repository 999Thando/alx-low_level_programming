#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Purpose - no hardcode
 *
 * Return: Always 0.
 */

int main(void)

	{

	int i = 0;
	unsigned long j = 1;
	unsigned long k = 2;

	while (i < 95)
	{
	if (i == 0)
	printf("%lu", j);
	else if (i == 1)
	printf(", %lu", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %lu", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
