#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: the string
 * Return: the encoded string
 */
char *leet(char *c)
{
	int s, r;
	char l[] = "aeotlAEOTL";
	char i[] = "4307143071";

	for (s = 0; c[s] != '\0'; s++)
	{
		for (r = 0; r < 10; r++)
		{
			if (c[s] == l[r])
			{
				c[s] = i[r];
			}
		}
	}
	return (c);
}
