#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: name
 * @t: function
 */
void print_name(char *name, void (*t)(char *))
{
	if (name == NULL || t == NULL)
		return;
	t(name);
}
