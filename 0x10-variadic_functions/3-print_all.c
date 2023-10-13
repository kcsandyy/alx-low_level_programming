#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: contains list of types of arguments passed to the function
 * c - char , s - string, f - float, i - integers
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	double db;
	int n;
	char *c = "";

	va_list arg_list;

	va_start(arg_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", c, va_arg(arg_list, int));
					break;
				case 'i':
					n = va_arg(arg_list, int);
					printf("%s%d", c, n);
					break;
				case 'f':
					db = va_arg(arg_list, double);
					printf("%s%f", c, db);
					break;
				case 's':
					s = va_arg(arg_list, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", c, s);
					break;
				default:
					i++;
					continue;
			}
			c = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(arg_list);
}
