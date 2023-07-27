#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry Point
 * @v: variadic inputs
 * Return: sum
 */
int sum_them_all(const unsigned int v, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (v == 0)
		return (0);

	va_start(valist, v);

	for (i = 0; i < v; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
