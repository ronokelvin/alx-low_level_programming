#include "main.h"

/**
 * _strlen -returns the length of a string
 * @s: string
 * Return: returns length as integer
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
