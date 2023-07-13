#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members in the array
 * @size: size in bytes
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *q;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	q = malloc(l);

	if (q == NULL)
		return (NULL);

	while (i < l)
	{
		q[i] = 0;
		i++;
	}

	return (q);
}
