#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i, strlen, j;

	strlen = 0;
	j = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	j = strlen - 1;

	for (i = 0; i < strlen / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j--] = tmp;
	}
}
