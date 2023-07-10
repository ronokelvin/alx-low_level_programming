#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Entry point
 * @c1: string 1
 * @c2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *c1, char *c2)
{
	char *strnew = NULL;
	unsigned int i;
	int t1;
	int t2;
	int count;

	count = 0;
	if (c1 == NULL)
		c1 = "";
	if (c2 == NULL)
		c2 = "";
	for (t1 = 0; c1[t1] != '\0'; t1++)
		;
	for (t2 = 0; c2[t2] != '\0'; t2++)
		;
	strnew = (char *)malloc((t1 + t2 + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; c1[i] != '\0'; i++)
		strnew[i] = c1[i];
	for (; c2[count] != '\0'; i++)
	{
		strnew[i] = c2[count];
		count++;
	}
	return (strnew);
}
