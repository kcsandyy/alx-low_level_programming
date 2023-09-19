#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int strlen = 0;
	int i;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	for (i = strlen - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
