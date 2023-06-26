#include "main.h"

/**
 * Return: returns length as integer
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
