#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mice, *cat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	mice = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (mice == cat)
		{
			mice = head;

			while (mice != cat)
			{
				mice = mice->next;
				cat = cat->next;
			}

			return (mice);
		}

		mice = mice->next;
		cat = (cat->next)->next;
	}

	return (NULL);
}
