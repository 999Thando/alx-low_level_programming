#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: integer to be checked
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
	
}
