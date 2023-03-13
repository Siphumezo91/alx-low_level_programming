#include "main.h"
#include <stdio.h>

/***
 * Prints multiplication of two integers
 * @argc: count argument
 * @argv: array argument
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int c, d;

	if (argc == 3)
	{
		c = atoi(argv[1]);
		d = atoi(argv[2]);
		printf("%d\n", c * d);
		return (0);
	}
	printf("Error\n");
	return (1);
}
