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
	long j = 1;
	long k = 2;

	while (i < 98)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else (i == 97)
	printf("\n")
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	return (0);
}
