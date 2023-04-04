#include <stdio.h>
#include "lists.h"

/**
 * size_t - print all the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t s = 0
		while (h != 0)
	{
		printf("%d\n" h);
		h++;
	}
	return (s);
}
