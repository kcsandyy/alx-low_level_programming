#include "lists.h"
/**
 * list_len -  a function that returns the number of elements 
 * in a linked list_t list.
 * @h: The list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
