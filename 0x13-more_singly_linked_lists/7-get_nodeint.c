#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets an integer at the specified index
 * @head: The list
 * @index: The index of the node, starting at 0
 * Return: The nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *node;

	node = head;
	if (node != NULL)
	{
		for (i = 0; i < index; i++)
			node = node->next;
	}
	return (node);
}
