#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head of a node
 * @head: The head node of the list
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);
	node = *head;
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
	
}
