#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *y)
{
	size_t nodes = 0;

	while (y)
	{
		nodes++;
		printf("%d\n", y->n);
		y = y->next;
	}

	return (nodes);
}
