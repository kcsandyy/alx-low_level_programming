#include "main.h"
/**
 * _sqrt - returns the natural square root of a number
 * @x: The number
 * @y: The squareroot
 * Return: square root of a number
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
