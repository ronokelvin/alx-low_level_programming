#include "main.h"

/**
 * factorial -  factorial of a number calculation
 * @f: the number to calculate the factorial
 *
 * Return: integer value
 */
int factorial(int f)
{
	if (f < 0)
		return (-1);
	if (f <= 1)
		return (1);
	return (f * factorial(f - 1));
}
