#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc
 * @b: The number of bytes to be malloced
 * Return:  a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void  *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		_Exit(98);
	}
	return (ptr);
}
