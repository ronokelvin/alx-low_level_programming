#include "main.h"

/**
 * more_numbers - prints numbers to 14
 *
 * Return: ALways 0 
 */

void more_numbers(void)
{
int i, j;

    for(i = 1; i <= 10; i++)
 {
	 for (j = 0; j<=14; i++)
       {
	       if ( j >= 10)
		        _putcher('1');
				_putche(j % 10 + '0');
       }
	 _putcher('\n');
}

