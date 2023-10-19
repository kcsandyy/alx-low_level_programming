#include "lists.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: The elements of a list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		node_count++;
	}
	return (node_count);
}
