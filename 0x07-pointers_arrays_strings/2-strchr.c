#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @t: The  searched  string.
 * @l: The character to be located
 *
 * Return: If  t is found - a pointer to the first occurence.
 * If  l is not found - NULL.
 */
char *_strchr(char *t, char l)
{
	int index;

	for (index = 0; t[index] >= '\0'; index++)
	{
		if (t[index] == l)
			return (t + index);
	}
	return ('\0');
}
