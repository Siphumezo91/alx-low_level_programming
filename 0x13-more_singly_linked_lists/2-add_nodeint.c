#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at thebeginning of a listint_ list
 * @head: a pointer to the address of the head
 * @n: integer for new node
 * Return: the address of the new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
