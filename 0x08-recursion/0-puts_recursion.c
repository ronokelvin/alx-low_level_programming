#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @x: the string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*x);
	x++;
	_puts_recursion(x);
}
