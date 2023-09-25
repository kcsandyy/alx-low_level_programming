#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals,
 * of a square matrix of integers
 * @a: pointer to a 2d array
 * @size: diagonal to be added
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, total = 0, total1 = 0;

	for (i = 0; i < size; i++)
		total += *(a + i * size + i);
	for (i = 0; i < size; i++)
		total1 += *(a + i * size + (size - 1 - i));

	printf("%d, %d\n", total, total1);
}
