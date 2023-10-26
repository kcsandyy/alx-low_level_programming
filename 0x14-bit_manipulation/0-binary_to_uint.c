#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary number
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	if (*b == '0' || *b == '1')
		return ((int) strtol(b, NULL, 2));
	else
		return (0);
}
