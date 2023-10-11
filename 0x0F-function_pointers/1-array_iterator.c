#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array
 * @array: The array pointer
 * @size: Size of the array
 * @action: Pointer to the function you need to use
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array == NULL || action == NULL)
			return;
		action(array[i]);
	}
}
