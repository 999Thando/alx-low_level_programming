#include <stdio.h>

/**
 * main - Program that finds and prints the largest prime factor
 * of the number 612852475143
 * Return: Always 0
 */

int main(void)

{

	long int a;
	long int c;
	long int n;

	n = 612852475143;

	for (a = 1; a <= n; a++)
	{
	if (n % 2 == 0)
	c = n / a;
	n = c;
	printf("%ld\n", c);
	{
	if (n == a)
	{
	printf("%ld\n", a);
	break;
	}
	}
	}
	return (0);
}
