#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	write("Size of a char: %d byte(s)\n", sizeof(char));
	write("Size of an int: %d byte(s)\n", sizeof(int));
	write("Size of a long int: %d byte(s)\n", sizeof(long int));
	write("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
