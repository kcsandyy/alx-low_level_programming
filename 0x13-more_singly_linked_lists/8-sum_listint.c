#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: The list
 * Return: The total sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
