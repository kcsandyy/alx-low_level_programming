#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: The first string
 * @s2: The second string to be concatenated
 * @n: number of s2 bytes
 * Return: a pointer to a new space memory for the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *S;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	S = malloc((len1 + n + 1) * sizeof(char));
	if (S == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		S[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		S[i + j] = s2[j];
	}
	S[i + j] = '\0';
	return (S);
}
