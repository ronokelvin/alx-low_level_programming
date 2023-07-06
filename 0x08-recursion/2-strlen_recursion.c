#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @sc: the string to count
 *
 * Return: integer value
 */
int _strlen_recursion(char *sc)
{
	if (*sc == '\0')
	{
		return (0);
	}
	sc++;
	return (_strlen_recursion(sc) + 1);
}
