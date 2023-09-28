#include "main.h"
/**
 * prime2 - checks if a number is a prime number
 * @x: The number
 * @y: The divisor
 * Return: 1 if number is prime and 0 if not
 */
int prime2(int x, int y)
{
	if (x < 2)
		return (0);
	if (x == 2)
		return (1);
	if (x % y == 0)
		return (0);
	if (y * y > x)
		return (1);

	return (prime2(x, y + 1));
}

/**
 * is_prime_number - checks for primes
 * @n: The number being checked
 * Return: 1 if successful
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime2(n, 2));
}
