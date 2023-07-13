#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @max: last integer number
 * @min: first integer number
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *c, x = 0;

	if (min > max)
		return (NULL);

	c = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (c == NULL)
		return (NULL);

	while (min <= max)
	{
		c[x] = min;
		x++;
		min++;
	}

	return (c);
}
