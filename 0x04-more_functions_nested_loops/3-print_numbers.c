#include "main.h"

/**
 * print_number - Print the numbers 0 up to 9
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for  (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
