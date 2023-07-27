#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - program that prints the opcodes of its own main function.
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: nothing.
 */
void print_opcodes(char *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%.2hhx", a[k]);
		if (k < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - prints the opcodes of its own main function
 * @argc: integer
 * @argv: character
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int ae;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	ae = atoi(argv[1]);
	if (ae < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, ae);

	return (0);
}
