#include "function_pointers.h"
/**
 * int_index - searches for a number in an array
 * @array: The array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
