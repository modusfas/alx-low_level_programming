#include "lists.h"

/**
 * add_nodeint - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewEle;

	NewEle = malloc(sizeof(listint_t));
	if (NewEle == NULL)
		return (NULL);

	NewEle->n = n;
	NewEle->next = *head;

	*head = NewEle;

	return (NewEle);
}
