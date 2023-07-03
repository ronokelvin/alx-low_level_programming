#include "main.h"

/**
 * _memset - Fills the first z bytes of the memory area
 * pointed to by @m with the constant byte @z.
 * @m: The pointer to the memory area to be filled.
 * @k: The character filling the memory area with.
 * @z: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @m.
 */
char *_memset(char *m, char k, unsigned int z)
{
	unsigned int i = 0;

	while (i < z)
	{
		*(m + i) = k;
		i++;
	}
	return (m);
}
