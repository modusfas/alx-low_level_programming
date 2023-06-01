#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: function that frees a list_t list.
 */

void free_list(list_t *head)
{
	list_t *present_node;

	while ((present_node = head) != NULL)
	{
		head = head->next;
		free(present_node->str);
		free(present_node);
	}
}
