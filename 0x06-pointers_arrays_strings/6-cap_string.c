#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @c: the string
 * Return: the capitalised stirng
 */
char *cap_string(char *c)
{
	int i = 0, j;
	int sp[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;

	while (c[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (c[i] == sp[j] && (c[i + 1] >= 'a' && c[i + 1] <= 'z'))
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
		i++;
	}
	return (c);
}
