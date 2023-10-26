#include "main.h"
/**
 * flip_bits - Flips bits
 * @n: The first integer
 * @m: The second integer
 * Return: The number of bits you would need to
 * flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int total = 0;

	while (result > 0)
	{
		total += result & 1;
		result >>= 1;
	}

	return (total);
}
