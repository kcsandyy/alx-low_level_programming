#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, len1 = 0, i;
	char *s3;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len++;
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			len1++;
	}

	s3 = (char *)malloc((len + len1 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < len1; i++)
	{
		s3[len + i] = s2[i];
	}
	s3[len + i] = '\0';
	return (s3);
}
