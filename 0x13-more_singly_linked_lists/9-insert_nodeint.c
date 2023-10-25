#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at any given position
 * @idx: The index of the list, index starts at 0
 * @head: The list
 * @n: The number to be added
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node;
	unsigned int node_count = 1;

	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	node = *head;

	while (node != NULL)
	{
		if (node_count == idx)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		node_count++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
