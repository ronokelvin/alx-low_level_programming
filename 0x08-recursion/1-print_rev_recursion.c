#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @sr: the string to reverse
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *sr)
{
	if (*sr == '\0')
	{
		return;
	}

	sr++;
	_print_rev_recursion(sr);
	sr--;
	_putchar(*sr);
}
