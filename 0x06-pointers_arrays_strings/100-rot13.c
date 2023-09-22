#include "main.h"
/**
 * rot13 -  encodes a string using rot13.
 * @c: string
 * Return: encoded string
 */
char *rot13(char *c)
{
	int j, i;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == alpha[j])
				c[i] = rot[j];
			break;
		}
	}
	return (c);
}
