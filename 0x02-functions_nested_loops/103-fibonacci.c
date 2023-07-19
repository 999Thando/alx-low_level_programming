#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms
 * less than 4000000
 * Return: Nothing!
 */

int main(void)

{

	int i = 0;
	long j = 1;
	long k = 2;
	long sum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}