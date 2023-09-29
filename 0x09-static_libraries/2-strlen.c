#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;
	int string_count = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		string_count++;
	}
	return (string_count);
}
