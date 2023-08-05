#include "main.h"

/**
 * print_most_numbers - Function that prints numbers, from 0 to 9
 * Description - Prints numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)

{

	int a;

	for (a = 48; a <= 57; a++)
	{
	if (a != 50 && a != 52)
	{
	_putchar(a);
	}
	}
	_putchar('\n');
}
