#include "main.h"

int actual_prime(int p, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @p: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int p)
{
	if (p <= 1)
		return (0);
	return (actual_prime(p, p - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @p: number to evaluate
 * @i: iterator
 *
 * Return: 1 if p is prime, 0 if not
 */
int actual_prime(int p, int i)
{
	if (i == 1)
		return (1);
	if (p % i == 0 && i > 0)
		return (0);
	return (actual_prime(p, i - 1));
}
