#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @b: The chessboard to be printed.
 */
void print_chessboard(char (*b)[8])
{
	int index1, index2;

	for (index1 = 0; b[index1][7]; index1++)
	{
		for (index2 = 0; index2 < 8; index2++)
			_putchar(b[index1][index2]);

		_putchar('\n');
	}
}
