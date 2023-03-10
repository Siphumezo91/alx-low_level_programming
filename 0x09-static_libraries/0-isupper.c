#include "main.h"

/**
 * _isupper - check if the letter is upper
 * @x: The number to be checked
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
