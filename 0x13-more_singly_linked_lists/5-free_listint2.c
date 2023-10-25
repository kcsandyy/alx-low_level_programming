#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: The pointer to the head pointer
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (*head == NULL)
	{
		free(head);
		return;
	}
	node = *head;
	while (node != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
