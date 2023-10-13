#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *l;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		l = va_arg(args, char *);

		if (l == NULL)
			printf("(nil)");
		else
			printf("%s", l);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
