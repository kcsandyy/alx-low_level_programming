#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return:  a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
