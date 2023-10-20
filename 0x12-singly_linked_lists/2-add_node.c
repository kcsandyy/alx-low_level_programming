#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - A function that adds a new node
 * at the beginning of a list_t list.
 * @head: A pointer to the first node pointer
 * @str: The data to be listed
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;

	list_t *new_node;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
