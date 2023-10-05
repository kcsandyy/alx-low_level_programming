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
	unsigned int a, b, i = 0, j = 0, len1 = 0, len2 = 0;
	char *S;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	       len1++;
	while (s2[j] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	S = malloc((len1 + n + 1) * sizeof(char *));
	if (S == NULL)
		return (NULL);
	for (a = 0; a < len1; a++)
	{
		S[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		S[a + b] = s2[b];
	}
	S[a + b] = '\0';
	return (S);
}
