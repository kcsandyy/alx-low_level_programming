#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int l;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		l = va_arg(args, int);
		printf("%d", l);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
