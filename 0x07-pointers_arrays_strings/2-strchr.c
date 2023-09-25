#include "main.h"
/**
 * _strchr - locates a string
 * @s: The string
 * @c: The character to be located
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
