#include <stdo.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: The first number
 * @b: The second numberr
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: The first number
 * @b: The second number
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		_Exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the remainder from the division of two numbers
 * @a: The first number
 * @b: The second number
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		_Exit(100);
	}
	return (a % b);
}
