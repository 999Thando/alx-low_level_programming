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
	unsigned long fib[100];

	fib[1] = 1;
	fib[2] = 2;

	for (i = 2; i < 100; ++i)
	{
	fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i <= 98; i++)
	{
	printf("%lu, ", fib[i]);
	}
	if (i == 98)
	{
	printf("%lu\n" 98);
	}
	return (0);
}
