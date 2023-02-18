#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le <= 'a'; le--)
		putcher(le);

	putchar('\n');

	return (0);
}
