#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: a string is printed
 * On success: no error returns 
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
	_putchar(*str);
}
         _putchar('\n');
}
