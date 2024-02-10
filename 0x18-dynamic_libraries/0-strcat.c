#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * verwriting the terminating null byte (\0) at the end of dest, and
 * then adds a terminating null byte
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
