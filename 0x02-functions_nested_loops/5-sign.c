#include "main.h"

/**
 * print_sign -  prints the sign of a number
 *
 * @n: parameter to be checked
 *
 * Return: 1, 0, -1 depending on the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
