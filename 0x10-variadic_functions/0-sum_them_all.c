#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: total parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, list;

	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		list = va_arg(numbers, int);
		sum += list;
	}
	return (sum);

	va_end(numbers);
}
