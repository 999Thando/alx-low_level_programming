#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Determine if a number is positive, negative or zero
 * 0: Is the number to be  checked
 * @i: Integer to be checked
 */

void positive_or_negative(int i)
{

	if (i < 0)
	{
	printf("%d is negetive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is positive\n", i);
	}
}
