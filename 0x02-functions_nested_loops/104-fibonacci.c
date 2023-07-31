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

	for (i = 2; i < 100; ++i)
	{
	fib2 += fib1;
	fib1 = fib2 - fib1;
	}
	for (i = 0; i <= 98; i++)
	{
	printf("%lu, ", fib2);
	}
	if (i == 98)
	{
	printf("%lu\n" i);
	}
	return (0);
}
