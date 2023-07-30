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

	int count;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum;

	for (count = 0; count < 98; count++)
	{
	sum = fib1 + fib2;
	printf("%lu,", sum);
	}
	fib1 = fib2;
	fib2 = sum;
	if (count == 97)
	{
	printf("\n");
	}
	else
	{
	printf(",");
	}
	return (0);
}
