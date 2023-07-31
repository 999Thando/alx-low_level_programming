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
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long sum;

	for (i = 0; i <= 99; i++)
	{
	if (i == 0)
	{
	printf("%lu", fib1);
	}
	else if (i == 1)
	{
	printf("%ld", fib2)
	}
	sum = fib1 + fib2;
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
	}
	return (0);
}
