#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: The first node
 * @n: The integer to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *next_new;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		next_new = *head;
		while (next_new->next != NULL)
			next_new = next_new->next;
		next_new->next = new_node;
	}
	return (new_node);
}
