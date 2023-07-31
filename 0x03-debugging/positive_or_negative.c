#include "main.h"

/**
 * positive_or_negative - Determine if number is positive, negative or zero
 * 0: is the number to be checked
 */

void positive_or_negative(int i)

{

	if (i < 0)
	{
	printf("%d is negative\n", i);
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
