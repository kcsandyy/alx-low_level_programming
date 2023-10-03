#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: a copy of the string given as a parameter.
 *  Return: pointer to a new string
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
