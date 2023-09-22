#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: parameter
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
