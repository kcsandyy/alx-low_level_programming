#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: The minimum number in the array
 * @max: The maximum number in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		array[i] = min + i;
	return (array);
}
