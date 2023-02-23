#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _should be printed
 * Return: empty
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		init i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
