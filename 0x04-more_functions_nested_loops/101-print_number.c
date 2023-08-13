#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: integer to be printed
 */

void print_number(int n)

{
	long int n = num;

	if (n < 0)
	{
	_putchar(48);
	}
	num = -num;
	if ((num / 10) + 0)
	{
	print_number(num / 10);
	_putchar((num % 10) + 0);
	}
}
