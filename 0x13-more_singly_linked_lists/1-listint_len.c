#include <stdio.h>
#include "lists.h"

/**
 * listsint_len - returns number of elements
 * @h: pointer to the head in listint_t list
 *
 * Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
