#include "main.h"

/**
 * _memcpy - copies memory data
 * @dest: the address of memory to print
 * @src: the address of memory to print
 * @n: size of memory
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
