#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: The list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
