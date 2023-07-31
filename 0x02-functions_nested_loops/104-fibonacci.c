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
	long unsigned fib1 = 1;
	long unsigned fib2 = 2;
	long unsigned sum;
	

	for (i = 0; i <= 99; i++)
	{
	sum = fib1 + fib2;
	printf("%lu", sum);
	}
	fib1 = fib2;
	fib2 = sum;
	if (i == 98)
	{
	printf("\n");
	}
	else
	{
	printf(",");
	}
	return (0);
}
