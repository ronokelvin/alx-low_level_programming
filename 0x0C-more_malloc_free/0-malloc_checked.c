#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @q: the size to allocate
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int q)
{
	void *z;

	z = malloc(q);

	if (z == NULL)
		exit(98);

	return (z);
}
