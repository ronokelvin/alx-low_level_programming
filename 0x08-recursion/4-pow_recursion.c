#include "main.h"

/**
 * _pow_recursion - returns the value of q raised to the power of w
 * @q: value to raise
 * @w: power
 *
 * Return: result of the power
 */
int _pow_recursion(int q, int w)
{
	if (w < 0)
		return (-1);
	if (w == 0)
		return (1);
	return (q * _pow_recursion(q, w - 1));
}
