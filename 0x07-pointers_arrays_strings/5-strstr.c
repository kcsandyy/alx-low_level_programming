#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: The string
 * @needle: The substring
 * Return: a pointer to needle or Null if its not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
				return (needle);
		}
	}
	return (NULL);
}
